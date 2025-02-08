#pragma once

#include "../util.h"

namespace Abilities
{
	inline FGameplayAbilitySpecHandle(*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec);
	inline char (*InternalTryActivateAbility)(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData);
	inline UObject* (*CreateDefaultObject)(UClass* Class);
	inline char (*CanActivateAbility)();

	FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle& Ability)
	{
		FGameplayAbilitySpec* Spec = nullptr;

		for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
		{
			if (AbilitySystemComponent->ActivatableAbilities.Items[i].Handle.Handle == Ability.Handle)
			{
				return Spec = &AbilitySystemComponent->ActivatableAbilities.Items[i];
			}
		}

		return Spec;
	}

	void InternalServerTryActiveAbility(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData)
	{
		FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(AbilitySystemComponent, Handle);
		if (!Spec)
		{
			AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			return;
		}

		UGameplayAbility* InstancedAbility = nullptr;
		Spec->InputPressed = true;

		if (!InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
		{
			AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			Spec->InputPressed = false;
		}

		AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
	}

	void ApplyGameplayAbility(UClass* AbilityClass, APlayerPawn_Athena_C* Pawn)
	{
		if (!AbilityClass || !Pawn) return;

		auto AbilitySystemComponent = Pawn->AbilitySystemComponent;

		if (AbilitySystemComponent)
		{
			auto GenerateNewSpec = [&]() -> FGameplayAbilitySpec
				{
					FGameplayAbilitySpecHandle Handle{ rand() };

					FGameplayAbilitySpec Spec{ -1, -1, -1, Handle, (UGameplayAbility*)CreateDefaultObject(AbilityClass), 1, -1, nullptr, 0, false, false, false };

					return Spec;
				};

			auto Spec = GenerateNewSpec();

			for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
			{
				auto& CurrentSpec = AbilitySystemComponent->ActivatableAbilities.Items[i];

				if (CurrentSpec.Ability == Spec.Ability)
					return;
			}

			GiveAbility(AbilitySystemComponent, &Spec.Handle, Spec);
		}
	}

	void GrantGameplayAbility(UFortAbilitySet* GameplayAbilitySet, APlayerPawn_Athena_C* Pawn)
	{
		if (!GameplayAbilitySet || !Pawn) return;

		for (int i = 0; i < GameplayAbilitySet->GameplayAbilities.Num(); i++)
		{
			auto AbilityClass = GameplayAbilitySet->GameplayAbilities[i];
			if (!AbilityClass) continue;

			ApplyGameplayAbility(AbilityClass, Pawn);
		}
	}
}
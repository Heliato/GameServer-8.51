#pragma once

#include "../util.h"

namespace Match
{
	void ReadyToStartMatch()
	{
		UWorld* World = Globals::GetWorld();

		HLog("ReadyToStartMatch");

		if (World)
		{
			AFortGameModeAthena* GameMode = (AFortGameModeAthena*)World->AuthorityGameMode;
			AAthena_GameState_C* GameState = (AAthena_GameState_C*)World->GameState;
			FName InProgress = Globals::GetStringLibrary()->Conv_StringToName(L"InProgress");

			if (GameMode && GameState)
			{
				UFortPlaylistAthena* Playlist = UObject::FindObjectSlow<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");

				GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
				GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
				GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
				GameState->CurrentPlaylistInfo.MarkArrayDirty();
				GameState->OnRep_CurrentPlaylistInfo();

				GameState->GamePhase = EAthenaGamePhase::Warmup;
				GameState->OnRep_GamePhase(EAthenaGamePhase::None);

				GameMode->MatchState = InProgress;
				GameMode->K2_OnSetMatchState(InProgress);

				GameMode->GameSession->MaxPlayers = Playlist->MaxPlayers;
				GameMode->StartPlay();
				GameMode->StartMatch();
			}
		}
	}

	AFortPawn* SpawnPlayer(AFortPlayerController* PlayerController, FVector& Location, FRotator Rotation, bool NewPlayer = true)
	{
		auto Pawn = Util::SpawnActor<APlayerPawn_Athena_C>(APlayerPawn_Athena_C::StaticClass(), Location, Rotation);
		UWorld* World = Globals::GetWorld();

		Pawn->bCanBeDamaged = NewPlayer ? false : true;
		Pawn->Owner = PlayerController;
		Pawn->OnRep_Owner();

		PlayerController->Pawn = Pawn;
		PlayerController->OnRep_Pawn();
		PlayerController->Possess(Pawn);

		Pawn->SetHealth(100);
		Pawn->SetMaxHealth(100);
		Pawn->SetShield(0);
		Pawn->SetMaxShield(100);

		if (NewPlayer && World)
		{
			auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
			PlayerState->bHasFinishedLoading = true;
			PlayerState->bHasStartedPlaying = true;
			PlayerState->OnRep_bHasStartedPlaying();

			/*AFortQuickBars* NewQuickBars = Util::SpawnActor<AFortQuickBars>(AFortQuickBars::StaticClass(), FVector(), FRotator());
			NewQuickBars->SetOwner(PlayerController);
			PlayerController->ClientQuickBars = NewQuickBars;*/

			static auto GlobalAbility = FindObjectFast<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");

			Abilities::GrantGameplayAbility(GlobalAbility, Pawn);

			PlayerController->bIsDisconnecting = false;
			PlayerController->bHasClientFinishedLoading = true;
			PlayerController->bHasServerFinishedLoading = true;
			PlayerController->bHasInitiallySpawned = true;
		}

		return Pawn;
	}
}
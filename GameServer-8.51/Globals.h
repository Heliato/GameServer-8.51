#pragma once

namespace Globals
{
	inline UWorld* World = nullptr;
	inline UFortEngine* FortEngine = nullptr;
	inline UKismetMathLibrary* MathLibrary = nullptr;
	inline UKismetSystemLibrary* SystemLibrary = nullptr;
	inline UKismetStringLibrary* StringLibrary = nullptr;
	inline UGameplayStatics* GameplayStatics = nullptr;
	inline UDataTableFunctionLibrary* FunctionLibrary = nullptr;

	UFortEngine* GetFortEngine(bool SkipCheck = false)
	{
		if (FortEngine == nullptr && !SkipCheck)
			FortEngine = UObject::FindObjectSlow<UFortEngine>("FortEngine_");

		return FortEngine;
	}

	UKismetMathLibrary* GetMathLibrary(bool SkipCheck = false)
	{
		return (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
	}

	UKismetSystemLibrary* GetSystemLibrary(bool SkipCheck = false)
	{
		return (UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass();
	}

	UKismetStringLibrary* GetStringLibrary(bool SkipCheck = false)
	{
		return (UKismetStringLibrary*)UKismetStringLibrary::StaticClass();
	}

	UGameplayStatics* GetGameplayStatics(bool SkipCheck = false)
	{
		return (UGameplayStatics*)UGameplayStatics::StaticClass();
	}

	UDataTableFunctionLibrary* GetFunctionLibrary(bool SkipCheck = false)
	{
		return (UDataTableFunctionLibrary*)UDataTableFunctionLibrary::StaticClass();
	}

	UFortKismetLibrary* GetKismetLibrary()
	{
		return (UFortKismetLibrary*)UFortKismetLibrary::StaticClass();
	}

	UWorld* GetWorld(bool SkipCheck = false)
	{
		if (World == nullptr && !SkipCheck)
		{
			UFortEngine* FortEngine = GetFortEngine();

			if (FortEngine)
			{
				if (FortEngine->GameViewport)
				{
					if (FortEngine->GameViewport->World)
						return FortEngine->GameViewport->World;
				}
			}

			return nullptr;
		}

		return World;
	}

	TArray<ULocalPlayer*> GetLocalPlayers()
	{
		UFortEngine* FortEngine = GetFortEngine();

		if (FortEngine)
		{
			if (FortEngine->GameInstance)
				return FortEngine->GameInstance->LocalPlayers;
		}
	}

	APlayerController* GetServerPlayerController()
	{
		UGameplayStatics* GameplayStatics = GetGameplayStatics();
		UWorld* World = GetWorld();

		if (GameplayStatics && World)
		{
			if (GameplayStatics->GetPlayerController(World, 0))
				return GameplayStatics->GetPlayerController(World, 0);
		}

		return nullptr;
	}

	AFortGameModeAthena* GetGameMode()
	{
		UWorld* World = GetWorld();

		if (World)
		{
			AFortGameModeAthena* GameMode = (AFortGameModeAthena*)World->AuthorityGameMode;

			if (GameMode)
				return GameMode;
		}

		return nullptr;
	}

	AFortGameStateAthena* GetGameState()
	{
		UWorld* World = GetWorld();

		if (World)
		{
			AFortGameStateAthena* GameState = (AFortGameStateAthena*)World->GameState;

			if (GameState)
				return GameState;
		}

		return nullptr;
	}

	UFortPlaylistAthena* GetPlaylist()
	{
		AFortGameStateAthena* GameState = GetGameState();

		if (GameState)
		{
			UFortPlaylistAthena* Playlist = GameState->CurrentPlaylistInfo.BasePlaylist;

			if (Playlist)
				return Playlist;
		}

		return nullptr;
	}
}
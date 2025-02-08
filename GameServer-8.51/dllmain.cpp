#include <Windows.h>
#include <iostream>
#include <thread>
#include <detours.h>

#include "SDK.hpp"

#include "Globals.h"

#include "Functions/Abilities.h"
#include "Functions/Inventory.h"
#include "Functions/Match.h"
#include "Functions/Beacon.h"

#include "FortKismetHooks.h"

#include "Util.h"
#include <fstream>
#include "Hooks.h"
#include "InitFunc.h"

DWORD WINAPI MainThread(LPVOID)
{
    Util::InitConsole();

    SetConsoleTitleA("GameServer 8.51 By Heliato");
    srand(time(0));

    if (Init::InitializeAll())
    {
        Hooks::InitHooks();
        FortKismetHooks::Init();

        UFortEngine* FortEngine = Globals::GetFortEngine();
        UGameplayStatics* GameplayStatics = Globals::GetGameplayStatics();
        APlayerController* PlayerController = Globals::GetServerPlayerController();

        if (FortEngine && GameplayStatics && PlayerController)
        {
            UFortConsole* NewConsole = (UFortConsole*)GameplayStatics->SpawnObject(UFortConsole::StaticClass(), FortEngine->GameViewport);
            UCheatManager* NewCheatManager = (UCheatManager*)GameplayStatics->SpawnObject(UCheatManager::StaticClass(), PlayerController);

            if (NewConsole && NewCheatManager)
            {
                FortEngine->GameViewport->ViewportConsole = (UFortConsole*)(NewConsole);
                PlayerController->CheatManager = NewCheatManager;

                // PlayerController->SwitchLevel(L"Athena_Terrain");
                PlayerController->SwitchLevel(L"Athena_Faceoff");
            }

            *(bool*)Hooks::GIsClient() = false;
            *(bool*)Hooks::GIsServer() = true;
        }

        HLog("Init Success !")
    }
    else
    {
        HLog("Init Failed !")
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE mod, DWORD reason, LPVOID res)
{
    if (reason == 1)
        CreateThread(0, 0, MainThread, mod, 0, 0);

    return TRUE;
}
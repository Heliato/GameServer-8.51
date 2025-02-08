#pragma once

namespace Beacon
{
    inline bool (*InitHost)(AOnlineBeaconHost* OnlineBeaconHost);
    inline char (*InitListen)(UNetDriver* NetDriver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
    inline void (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
    inline void (*TickFlush)(UNetDriver* NetDriver, float DeltaSeconds);
    inline int32 (*ServerReplicateActors)(UReplicationGraph* ReplicationGraph, float DeltaSeconds);

    void TickFlushHook(UNetDriver* NetDriver, float DeltaSeconds)
    {
        if (NetDriver)
        {
            if (NetDriver->IsA(UIpNetDriver::StaticClass()) &&
                NetDriver->ClientConnections.Num() > 0 &&
                !NetDriver->ClientConnections[0]->InternalAck)
            {
                if (NetDriver->ReplicationDriver)
                    ServerReplicateActors((UReplicationGraph*)NetDriver->ReplicationDriver, DeltaSeconds);
            }
        }

        return TickFlush(NetDriver, DeltaSeconds);
    }

    void Listen()
    {
        AOnlineBeaconHost* NewBeacon = Util::SpawnActor<AOnlineBeaconHost>(AOnlineBeaconHost::StaticClass(), {}, {});
        UWorld* World = Globals::GetWorld();

        if (NewBeacon && World)
        {
            NewBeacon->ListenPort = 7777 - 1;

            if (World->NetDriver)
            {
                HLog("Beacon already create!");
                return;
            }

            if (InitHost(NewBeacon))
            {
                World->NetDriver = NewBeacon->NetDriver;
                HLog("Beacon created successful!");
            }
            else
            {
                HLog("Failed to create Beacon!");
                return;
            }

            if (World->NetDriver)
            {
                World->NetDriver->World = World;
                World->NetDriver->NetDriverName = Globals::GetStringLibrary()->Conv_StringToName(L"GameNetDriver");

                FString Error;
                auto URL = FURL();
                URL.Port = 7777;

                InitListen(World->NetDriver, World, URL, true, Error);

                SetWorld(World->NetDriver, World);

                World->LevelCollections[0].NetDriver = World->NetDriver;
                World->LevelCollections[1].NetDriver = World->NetDriver;

                HLog("Beacon listen: " << URL.Port);

                START_DETOUR;
                DetourAttach(TickFlush, TickFlushHook);
                END_DETOUR;
            }
            else
            {
                HLog("Failed to listen!");
            }
        }
    }
}
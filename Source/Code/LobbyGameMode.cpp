// Fill out your copyright notice in the Description page of Project Settings.

#include "LobbyGameMode.h"

ALobbyGameMode::ALobbyGameMode()
{
	PlayerControllerClass = ALobbyPC::StaticClass();
}

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (!HasAuthority())
	{
		return;
	}

	ALobbyPC* lobbyPC = Cast<ALobbyPC>(NewPlayer);

	allPlayerControllers.Add(lobbyPC);
	playersReady.Add(false);

	lobbyPC->InitialSetup();
}

void ALobbyGameMode::EveryoneUpdate(ALobbyPC* exclude)
{
	for (int i = 0; i < allPlayerControllers.Num(); i++)
	{
		if (allPlayerControllers[i] != exclude)
		{
			allPlayerControllers[i]->UpdateLobbySettings(i, playersReady);
		}
	}
}

void ALobbyGameMode::LaunchGame()
{

}
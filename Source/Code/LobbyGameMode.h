// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LobbyPC.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CODE_API ALobbyGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	
public:

	ALobbyGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	void EveryoneUpdate(ALobbyPC* exclude);
	void LaunchGame();

	bool canWeStart = false;
	TArray<ALobbyPC*> allPlayerControllers;
	TArray<bool> playersReady;
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Insult.generated.h"

UCLASS()
class CODE_API AInsult : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInsult();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> horaires;
	UPROPERTY(EditAnywhere)
	TArray<AActor*> antiHoraires;
	UPROPERTY(EditAnywhere)
	float SpeedRotation = 1.0f;
};

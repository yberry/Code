// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cell.generated.h"

UCLASS()
class CODE_API ACell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACell();
	ACell(bool west, bool north, bool east, bool south, bool visited);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category = "Data")
	bool West;
	UPROPERTY(BlueprintReadWrite, Category = "Data")
	bool North;
	UPROPERTY(BlueprintReadWrite, Category = "Data")
	bool East;
	UPROPERTY(BlueprintReadWrite, Category = "Data")
	bool South;
	UPROPERTY(BlueprintReadWrite, Category = "Data")
	bool Visited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int xPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int yPos;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void HideWalls();
	
};

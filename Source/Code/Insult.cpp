// Fill out your copyright notice in the Description page of Project Settings.

#include "Insult.h"


// Sets default values
AInsult::AInsult()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInsult::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInsult::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float Rotation = DeltaTime * SpeedRotation;

	FRotator horaire(0.0f, 0.0f, Rotation);
	FRotator antiHoraire(0.0f, 0.0f, -Rotation);

	for (int i = 0; i < horaires.Num(); i++)
	{
		horaires[i]->AddActorLocalRotation(horaire);
	}

	for (int i = 0; i < antiHoraires.Num(); i++)
	{
		antiHoraires[i]->AddActorLocalRotation(antiHoraire);
	}
}


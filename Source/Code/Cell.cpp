// Fill out your copyright notice in the Description page of Project Settings.

#include "Cell.h"


// Sets default values
ACell::ACell() : ACell(false, false, false, false, false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	

}

ACell::ACell(bool west, bool north, bool east, bool south, bool visited)
{
	PrimaryActorTick.bCanEverTick = true;

	West = west;
	North = north;
	East = east;
	South = south;
	Visited = visited;
}

// Called when the game starts or when spawned
void ACell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


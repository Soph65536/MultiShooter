// Fill out your copyright notice in the Description page of Project Settings.


#include "P1Pawn.h"

// Sets default values
AP1Pawn::AP1Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP1Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP1Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AP1Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

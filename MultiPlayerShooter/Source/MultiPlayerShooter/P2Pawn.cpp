// Fill out your copyright notice in the Description page of Project Settings.


#include "P2Pawn.h"

// Sets default values
AP2Pawn::AP2Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP2Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP2Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AP2Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

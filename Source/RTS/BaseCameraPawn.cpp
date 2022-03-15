// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCameraPawn.h"

// Sets default values
ABaseCameraPawn::ABaseCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


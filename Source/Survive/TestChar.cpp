// Fill out your copyright notice in the Description page of Project Settings.

#include "TestChar.h"


// Sets default values
ATestChar::ATestChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATestChar::MoveForward(float amount)
{
}

void ATestChar::MoveRight(float amount)
{
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "EP_AI.h"

// Sets default values
AEP_AI::AEP_AI()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEP_AI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEP_AI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEP_AI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


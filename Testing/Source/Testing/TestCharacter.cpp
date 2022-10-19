// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCharacter.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("ForwardBackward"), this, &ATestCharacter::ForwardBackward);
	PlayerInputComponent->BindAxis(TEXT("ForwardBackward"), this, &ATestCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ATestCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookDown"), this, &ATestCharacter::LookDown);

}

void ATestCharacter::ForwardBackward(float AxisValue) {
	AddMovementInput(GetActorForwardVector() * AxisValue);
}
void ATestCharacter::LeftRight(float AxisValue) {
	AddMovementInput(GetActorRightVector() * AxisValue);
}
void ATestCharacter::LookUpDown(float AxisValue) {
	AddMovementInput(GetActorForwardVector() * AxisValue);
}
void ATestCharacter::LookSide(float AxisValue) {
	AddMovementInput(GetActorForwardVector() * AxisValue);
}
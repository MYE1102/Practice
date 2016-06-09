// Fill out your copyright notice in the Description page of Project Settings.

#include "ML11.h"
#include "Interactable.h"


// Sets default values
AInteractable::AInteractable()
{
	InteractableHelpText = FString("Press E to interact with item");

}

// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractable::Interact_Implementation()
{
	/*Quick wway to log*/
	GLog->Log("Interact base class: interact() YOU SHOULD NOT BE SEEING THIS");
}
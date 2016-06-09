// Fill out your copyright notice in the Description page of Project Settings.

#include "ML11.h"
#include "ML11Character.h"
#include "Pickup.h"

APickup::APickup()
{
	/*Set u pthe mesh for the pickup and set the item name, help textt and item value*/
	InteractableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	InteractableMesh->SetSimulatePhysics(true);
	ItemName = FString("Enter an item name here...");
	InteractableHelpText = FString("Press E to pick item up");
	Value = 0;
}
void APickup::BeginPlay()
{
	InteractableHelpText = FString::Printf((TEXT("%s: Press E to Pickup"), *ItemName));
}
void APickup::Interact_Implementation()
{
	AML11Character* Charater = Cast<AML11Character>(UGameplayStatics::GetPlayerCharacter(this, 0));

	/*Put code here that places item into the character's inventory*/

	OnPickedUp();
}
void APickup::Use_Implementation()
{
	GLog->Log("Use() from base pickup class : YOU SHOULD NOT BE SEEING THIS");
}
void APickup::OnPickedUp()
{
	InteractableMesh->SetVisibility(false);
	InteractableMesh->SetSimulatePhysics(false);
	InteractableMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
//void APickup::
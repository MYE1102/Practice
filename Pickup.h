// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Interactable.h"
#include "Pickup.generated.h"

/**
 * base if pickup class
 */
UCLASS()
class ML11_API APickup : public AInteractable
{
	GENERATED_BODY()

public:
	APickup();

	virtual void BeginPlay() override;

	virtual void Interact_Implementation() override;

	UFUNCTION(BlueprintNativeEvent)
	void Use();
	virtual void Use_Implementation();

	UPROPERTY(EditAnywhere, Category = "Pickup Properties")
	UTexture2D* PickupThumbnail;
	UPROPERTY(EditAnywhere, Category = "Pickup Properties")
	FString ItemName;

	UPROPERTY(EditAnywhere, Category = "Pickup Properties")
	int32 Value;
	/*This is called when item is picked up and needs to becleaned up from the level*/
	void OnPickedUp();
	
};

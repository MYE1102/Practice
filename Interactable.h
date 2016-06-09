// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class ML11_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent)
	void Interact();
	virtual void Interact_Implementation();
	

	/*We can assume that all interactables will have a static mesh*/
	UPROPERTY(EditAnywhere, Category = "Interactable Properties")
	class UStaticMeshComponent* InteractableMesh;

	/*We can assume that all interactables will have a Help Text*/
	UPROPERTY(EditAnywhere, Category = "Interactable Properties")
	FString InteractableHelpText;
	
};

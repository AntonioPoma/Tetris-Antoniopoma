// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ConstructorBlock.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IngenieroBlock.generated.h"

UCLASS()
class TETRISUSFX01_API AIngenieroBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIngenieroBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	IConstructorBlock* ConstructorBlock;
	//Creates the buildings
	void ConstruirBloque();
	//Set the Builder Actor
	void SetConstructorBlock(AActor* Constructor);
	//Get the Lodging of the Builder
	class ABlockGeneral* GetBlockGeneral();

};

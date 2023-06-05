// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockExplosivo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"


void ABlockExplosivo::BeginPlay()
{

	// Spawn the Lodging Actors
	BlockGeneral = GetWorld()->SpawnActor<ABlockGeneral>(ABlockGeneral::StaticClass());
	//Attach it to the Builder (this)
	BlockGeneral->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	Material1 = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), nullptr, TEXT("Material'/Game/Mesh/Material_005.Material_005'")));//Haciendo cast al material

}


void ABlockExplosivo::ContruirTamanoBloque()
{
	//Set the Swimming Pool of the Lodging
	BlockGeneral->SetTamanoBloque("El tamaño del bloque explosivo");

}

void ABlockExplosivo::ConstruirColorBloque()
{
	BlockGeneral->SetColorBloque("El color del bloque explosivo");

}

void ABlockExplosivo::ConstruirMaterial()
{

	BlockMesh->SetMaterial(0, Material1);


	BlockGeneral->SetMaterial("El Material del bloque explosivo");

	FString NombreMaterial = Material1->GetName();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El material es %s"), *NombreMaterial));



}

ABlockGeneral* ABlockExplosivo::GetBlockGeneral()
{
	return BlockGeneral;
}


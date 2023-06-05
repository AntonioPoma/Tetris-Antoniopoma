// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioShop2.h"
#include "Escenario1.h"
#include "Escenario2.h"

AEscenario* AEscenarioShop2::Confeccionar(FString EscenarioSKU)
{
    //Select which potion to spawn depending on the passed string
    if (EscenarioSKU.Equals("Escenario_1")) {
        return GetWorld()->SpawnActor<AEscenario1>(AEscenario1::StaticClass());
    }
    else if (EscenarioSKU.Equals("Escenario_2")) {
        return GetWorld()->SpawnActor<AEscenario2>(AEscenario2::StaticClass());
    }

    else return nullptr; //Return null if the string isn't valid

}

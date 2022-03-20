///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"

size_t totalCats = 0;
struct cat cats[MAX_CATS];

//function
void initializeCatsStructArray(struct cat catStructArray[] ) {
    for (int i = 0; i < MAX_CATS; i++) {
        strcpy(catStructArray[i].name, "Default Name");
        catStructArray[i].gender = UNKNOWN_GENDER;
        catStructArray[i].breed = UNKNOWN_BREED;
        catStructArray[i].isFixed = false;
        catStructArray[i].weight = 0.0;
        catStructArray[i].collarColor1 = UNKNOWN_COLOR;
        catStructArray[i].collarColor2 = UNKNOWN_COLOR;
        catStructArray[i].license = 0;
    }
}
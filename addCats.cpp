///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"

int addCat(struct cat catStructArray[], size_t* totalCats, char name[], catGender gender, catBreed breed, bool isFixed, Weight* weight, Color collarColor1, Color collarColor2, unsigned long long license) {

#ifdef DEBUG
    fprintf(stdout,"db = %s\n", isDbFull(*totalCats)?"true":"false");
        fprintf(stdout,"isCatNameEmpty = %s\n", isCatNameEmpty(name)?"true":"false");
        fprintf(stdout,"isNameLargerThan30Char = %s\n", isNameLargerThan30Char(name)?"true":"false");
        fprintf(stdout,"weight = %f\n", weight);
        fprintf(stdout,"isWeightLargerThanZero = %s\n", isWeightLargerThanZero(&weight)?"true":"false");
#endif
    strcpy(catStructArray[*totalCats].name, name);
    catStructArray[*totalCats].gender = gender;
    catStructArray[*totalCats].breed = breed;
    catStructArray[*totalCats].isFixed = isFixed;
    catStructArray[*totalCats].weight = *weight;
    catStructArray[*totalCats].collarColor1 = collarColor1;
    catStructArray[*totalCats].collarColor2 = collarColor2;
    catStructArray[*totalCats].license = license;
    *totalCats = *totalCats + 1;

    return 0;
}
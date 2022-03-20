///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"

void deleteAllCats(struct cat catStructArray[], size_t* totalCats) {
    *totalCats = 0;
    initializeCatsStructArray(catStructArray);
    fprintf(stdout,"CAT MASACRE: All the cats have been successfully killed\n");
}

int deleteCat(struct cat catStructArray[], size_t* totalCats, int index) {
    for (int i = 0; i<*totalCats-index-1; i++) {
        fprintf(stdout,"i = %d\n", i);
        catStructArray[index + i] = catStructArray[index + i + 1];
    }

    struct cat* lastCat = (catStructArray + *totalCats-1);
    strcpy(lastCat->name, "Default Name");
    lastCat->gender = UNKNOWN_GENDER;
    lastCat->breed = UNKNOWN_BREED;
    lastCat->isFixed = false;
    lastCat->weight = 0.0;

    (*totalCats) = (*totalCats) - 1;

    return 0;
}
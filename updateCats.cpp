///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"

int updateCatName(struct cat catStructArray[], size_t* totalCats, int index, char newName[]) {

    if (findCat(catStructArray, totalCats, newName) >= 0) {
        fprintf(stdout,"Sorry, %s is already a cat on the farm.\n", newName);
        return 1;
    }

    if (strlen(newName) <= 0) {
        fprintf(stdout,"Sorry, cats need to have a name longer than 0 characters.\n");
        return 1;
    }


#ifdef DEBUG
    fprintf(stdout,"newName = %s\n", newName);
    fprintf(stdout,"current index name = %s\n", catStructArray[index].name);
#endif

    char oldName[MAX_CAT_NAME];
    strcpy(oldName, catStructArray[index].name);
    strcpy(catStructArray[index].name, newName);
    fprintf(stdout,"You changed %s's name to %s\n", oldName, catStructArray[index].name);

#ifdef DEBUG
    fprintf(stdout,"final index name = %s\n", catStructArray[index].name);
#endif
    return 0;
}

void fixCat(struct cat catStructArray[], int index) {
    bool oldState = catStructArray[index].isFixed;
    catStructArray[index].isFixed = !oldState;
    fprintf(stdout,"%s is now %s\n", catStructArray[index].name, catStructArray[index].isFixed?"fixed":"not fixed");
#ifdef DEBUG
    fprintf(stdout,"old state = %s\n",oldState?"fixed":"notfixed");
    fprintf(stdout,"new state = %s\n", catStructArray[index].isFixed?"fixed":"notfixed");
#endif
}

int updateCatWeight(struct cat catStructArray[], int index, float* newWeight) {

    if (*newWeight <= 0) {
        fprintf(stdout,"The new weight needs to be > 0\n");
        return 1;
    }

#ifdef DEBUG
    fprintf(stdout,"current weight = %f\n", catStructArray[index].weight);
#endif
    catStructArray[index].weight = *newWeight;
    fprintf(stdout,"%s's new weight is %f\n", catStructArray[index].name, catStructArray[index].weight);
#ifdef DEBUG
    fprintf(stdout,"final weight = %f\n", catStructArray[index].weight);
#endif
    return 0;
}

void updateCatCollar1(struct cat catStructArray[], int index, Color newCollarCollar1) {
    Color oldColor = catStructArray[index].collarColor1;
    catStructArray[index].collarColor1 = newCollarCollar1;
    fprintf(stdout,"%s's new collarColor1 is %d\n", catStructArray[index].name, catStructArray[index].collarColor1);
}

void updateCatCollar2(struct cat catStructArray[], int index, Color newCollarCollar2) {
    Color oldColor = catStructArray[index].collarColor2;
    catStructArray[index].collarColor2 = newCollarCollar2;
    fprintf(stdout,"%s's new collarColor2 is %d\n", catStructArray[index].name, catStructArray[index].collarColor2);
}

void updateCatLicense(struct cat catStructArray[], int index, unsigned long long newLicense) {
    catStructArray[index].license = newLicense;
    fprintf(stdout,"%s's new license is %llu\n", catStructArray[index].name, catStructArray[index].license);
}
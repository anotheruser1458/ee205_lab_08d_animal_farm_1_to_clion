///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file util.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"

int moveCatBackOneIndex(struct cat catStructArray[], int index) {
    *(catStructArray + index) = *(catStructArray + index + 1);
    return 0;
}

bool isDbFull(NumCats totalCats) {
    return totalCats == MAX_CATS ? true:false;
}

bool isCatNameEmpty(char name[]) {
    return strlen(name) > 0 ? false:true;
}

bool isNameLargerThan30Char(char name[]) {
    return strlen(name) > 30 ? true:false;
}

bool isWeightLargerThanZero(Weight* weight) {
    return *weight > 0.0 ? true:false;
}
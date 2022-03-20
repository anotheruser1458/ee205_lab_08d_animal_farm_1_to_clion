///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file main.h
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB_08D_ANIMAL_FARM_1_MAIN_H
#define EE205_LAB_08D_ANIMAL_FARM_1_MAIN_H

#endif //EE205_LAB_08D_ANIMAL_FARM_1_MAIN_H
#pragma once
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#define MAX_CATS 1024
#define MAX_CAT_NAME 50
//#define DEBUG

// catDatabase
typedef enum {UNKNOWN_GENDER, MALE, FEMALE} catGender;
typedef enum {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX} catBreed;
typedef enum {BLACK, WHITE, RED, BLUE, GREEN, PINK, UNKNOWN_COLOR} Color;
struct cat {
    char name[MAX_CAT_NAME];
    catGender gender;
    catBreed breed;
    bool isFixed;
    float weight;
    Color collarColor1;
    Color collarColor2;
    unsigned long long license;
};

extern void initializeCatsStructArray(struct cat catStructArray[] );
extern int addCat(struct cat catStructArray[], size_t* totalCats, char name[], catGender gender, catBreed breed, bool isFixed, float* weight, Color collarColor1, Color collarColor2, unsigned long long license);
extern int printAllCats(struct cat catStructArray[], size_t* totalCats);
extern int findCat(struct cat catStructArray[], size_t* totalCats, char name[MAX_CAT_NAME]);
extern int updateCatName(struct cat catStructArray[], size_t* totalCats, int index, char newName[]);
extern int printCat(struct cat catStructArray[], size_t* totalCats, int index);
extern void fixCat(struct cat catStructArray[], int index);
extern void updateCatCollar1(struct cat catStructArray[], int index, Color newCollarCollar1);
extern void updateCatCollar2(struct cat catStructArray[], int index, Color newCollarCollar2);
extern void updateCatLicense(struct cat catStructArray[], int index, unsigned long long newLicense);
extern int deleteCat(struct cat catStructArray[], size_t* totalCats, int index);
extern void deleteAllCats(struct cat catStructArray[], size_t* totalCats);
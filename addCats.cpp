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
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

bool checkDuplicateCollars(struct cat catStructArray[], Color color, NumCats *totalCats) {
    for (int i = 0; i < *totalCats; i++) {
        if(catStructArray[i].collarColor1 == color || catStructArray[i].collarColor2 == color)
            return false;
    }
    return true;
}

bool checkDuplicateLicenses(struct cat catStructArray[], unsigned long long license, NumCats *totalCats) {
    for (int i = 0; i < *totalCats; i++) {
        if(catStructArray[i].license == license)
            return false;
    }
    return true;
}

char* removeComma(char charArray[]) {
    int length = sizeof(charArray)/sizeof(char*);
    for(int i = 0; i <= length; i++) {
        if(charArray[i] == ',') {
            charArray[i] = '\0';
        }
    }
}

void assignMonth(struct tm* date, char month[]) {

    if(!strcmp(month, "January")) {
        date->tm_mon = 0;
    } else if (!strcmp(month, "February")) {
        date->tm_mon = 1;
    } else if (!strcmp(month, "March")) {
        date->tm_mon = 2;
    }else if (!strcmp(month, "April")) {
        date->tm_mon = 3;
    }else if (!strcmp(month, "May")) {
        date->tm_mon = 4;
    }else if (!strcmp(month, "June")) {
        date->tm_mon = 5;
    }else if (!strcmp(month, "July")) {
        date->tm_mon = 6;
    }else if (!strcmp(month, "August")) {
        date->tm_mon = 7;
    }else if (!strcmp(month, "September")) {
        date->tm_mon = 8;
    }else if (!strcmp(month, "October")) {
        date->tm_mon = 9;
    }else if (!strcmp(month, "November")) {
        date->tm_mon = 10;
    }else if (!strcmp(month, "December")) {
        date->tm_mon = 11;
    }
}

void assignDay(struct tm* date, int day) {
    date->tm_mday = day;
}

void assignYear(struct tm* date, int year) {
    date->tm_year = year;
}

char** splitString(char birthdayString[]) {
    char** stringArray = (char**)malloc(3*(20*sizeof(char*)));
    char delimiter[] = " ";
    stringArray[0] = strtok(birthdayString, delimiter);
    stringArray[1] = strtok(NULL, delimiter);
    stringArray[2] = strtok(NULL, delimiter);

    return stringArray;
}

struct tm convertStringToBirthday(struct tm* birthdayStruct, char *birthdayString) {
    char** splitBdayString = splitString(birthdayString);
    assignMonth(birthdayStruct, splitBdayString[0]);
    assignDay(birthdayStruct, atoi(splitBdayString[1]));
    assignYear(birthdayStruct, atoi(splitBdayString[2]));
}

int addCat(struct cat catStructArray[], NumCats* totalCats, char name[], catGender gender, catBreed breed, bool isFixed, Weight* weight, Color collarColor1, Color collarColor2, unsigned long long license, char birthdayString[]) {

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

    assert(checkDuplicateCollars(catStructArray, collarColor1, totalCats));
    assert(checkDuplicateCollars(catStructArray, collarColor2, totalCats));
    assert(collarColor1 != collarColor2);
    assert(checkDuplicateLicenses(catStructArray, license, totalCats));

    catStructArray[*totalCats].collarColor1 = collarColor1;
    catStructArray[*totalCats].collarColor2 = collarColor2;
    catStructArray[*totalCats].license = license;

    struct tm bd;
    convertStringToBirthday(&bd, birthdayString);
    catStructArray[*totalCats].birthday = bd;

    *totalCats = *totalCats + 1;

    return 0;
}


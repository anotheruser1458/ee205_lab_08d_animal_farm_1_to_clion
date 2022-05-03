///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include "math.h"

static const char * const colorNames[] = {
        [BLACK] = "BLACK",
        [WHITE] = "WHITE",
        [RED] = "RED",
        [BLUE] = "BLUE",
        [GREEN] = "GREEN",
        [PINK] = "PINK",
        [ORANGE] = "ORANGE",
        [YELLOW] = "YELLOW",
        [TAN] = "TAN",
        [UNKNOWN_COLOR] = "UNKNOWN_COLOR"
};

static const char * const breedNames[] = {
        [UNKNOWN_BREED] = "UNKNOWN_BREED",
        [MAINE_COON] = "MAINE_COON",
        [MANX] = "MANX",
        [SHORTHAIR] = "SHORTHAIR",
        [PERSIAN] = "PERSIAN",
        [SPHYNX] = "SPHYNX",
};

static const char * const genderNames[] = {
        [UNKNOWN_GENDER] = "UNKNOWN_GENDER",
        [MALE] = "MALE",
        [FEMALE] = "FEMALE",
};

const char* convertMonth(int mon) {
    switch(mon) {
        case 0: return "01";
        case 1: return "02";
        case 2: return "03";
        case 3: return "04";
        case 4: return "05";
        case 5: return "06";
        case 6: return "07";
        case 7: return "08";
        case 8: return "09";
        case 9: return "10";
        case 10: return "11";
        case 11: return "12";
    }
}



const char* convertDay(int day) {
    switch(day) {
        case 1: return "01";
        case 2: return "02";
        case 3: return "03";
        case 4: return "04";
        case 5: return "05";
        case 6: return "06";
        case 7: return "07";
        case 8: return "08";
        case 9: return "09";
        case 10: return "10";
        case 11: return "11";
        case 12: return "12";
        case 13: return "13";
        case 14: return "14";
        case 15: return "15";
        case 16: return "16";
        case 17: return "17";
        case 18: return "18";
        case 19: return "19";
        case 20: return "20";
        case 21: return "21";
        case 22: return "22";
        case 23: return "23";
        case 24: return "24";
        case 25: return "25";
        case 26: return "26";
        case 27: return "27";
        case 28: return "28";
        case 29: return "29";
        case 30: return "30";
        case 31: return "31";
        default: return "unknown day";
    }
}



int printCat(struct cat catStructArray[], NumCats* totalCats, int index) {
    // less than 0
    if (index < 0) {
        fprintf(stdout,"Bad Code [%d]\n", index);
        return 0;
    }

    //more than number of cats in database
    if (index >= *totalCats) {
        fprintf(stdout,"Bad Cat [%d]\n", index);
        return 0;
    }

    struct cat currentCat = catStructArray[index];
    fprintf(stdout,"cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] collarColor1 = [%s] collarColor2 = [%s] license = [%llu] birthday = [%s/%s/%d]\n", index, currentCat.name, genderNames[currentCat.gender], breedNames[currentCat.breed], currentCat.isFixed, currentCat.weight, colorNames[currentCat.collarColor1], colorNames[currentCat.collarColor2], currentCat.license,
            convertMonth(currentCat.birthday.tm_mon), convertDay(currentCat.birthday.tm_mday), currentCat.birthday.tm_year%100);
    return 0;
}

int printAllCats(struct cat catStructArray[], NumCats* totalCats) {

    if (*totalCats == 0) {
        fprintf(stdout,"There are no cats on the farm.\n");
        return 0;
    }

    for (int i = 0; i < *totalCats; i++) {
        printCat(catStructArray, totalCats, i);
    }
    return 0;
}

int findCat(struct cat catStructArray[], NumCats* totalCats, char name[MAX_CAT_NAME]) {
    for (int i = 0; i < *totalCats; i++) {
        if (!strcmp(catStructArray[i].name, name)) {
            return i;
        }
    }
    return -1;
}
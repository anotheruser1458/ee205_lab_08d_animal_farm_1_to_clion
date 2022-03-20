///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Maxwell Pauly <mgpauly@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"

int main() {
    fprintf(stdout,"Starting Animal Farm 1\n\n");

    struct cat catArray[MAX_CATS];
    size_t totalCats = 0;
    initializeCatsStructArray(catArray);

    float w = 8.5, w2 = 7.0, w3 = 18.2, w4 = 9.2, w5 = 12.2, w6 = 19.0;
    addCat(catArray, &totalCats, "Loki", MALE, PERSIAN, true, &w, BLACK, WHITE, 101);
    addCat(catArray, &totalCats, "Milo", MALE, MANX, true, &w2, BLACK, RED, 102);
    addCat(catArray, &totalCats, "Bella", FEMALE, MAINE_COON, true,  &w3, BLACK, BLUE, 103);
    addCat(catArray, &totalCats, "Kali", FEMALE, SHORTHAIR, false, &w4, BLACK, GREEN, 103);
    addCat(catArray, &totalCats, "Trin", FEMALE, MANX, true,  &w5, BLACK, PINK, 105);
    addCat(catArray, &totalCats, "Chili", UNKNOWN_GENDER, SHORTHAIR, false,  &w6, WHITE, BLACK, 106);
    printAllCats(catArray, &totalCats);
    fprintf(stdout,"\n");

    int kali = findCat(catArray, &totalCats, "Kali");
    updateCatName(catArray, &totalCats, kali, "Chili");
    printCat(catArray, &totalCats, kali);
    updateCatName(catArray, &totalCats, kali, "Capulet");
    fixCat(catArray, kali);
    printCat(catArray, &totalCats, kali);
    updateCatCollar1(catArray, kali, RED);
    printCat(catArray, &totalCats, kali);
    updateCatCollar2(catArray, kali, WHITE);
    printCat(catArray, &totalCats, kali);
    updateCatLicense(catArray, kali, 200);
    printCat(catArray, &totalCats, kali);
    fprintf(stdout,"\n");

    printAllCats(catArray, &totalCats);
    fprintf(stdout,"\n");

    deleteCat(catArray, &totalCats, kali);
    printAllCats(catArray, &totalCats);
    fprintf(stdout,"\n");

    deleteAllCats(catArray, &totalCats);
    printAllCats(catArray, &totalCats);
    fprintf(stdout,"\n");

    fprintf(stdout,"Done with Animal Farm 1\n");
    return 0;
}
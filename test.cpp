/////////////////////////////////////////////////////////////////////////////////
/////         University of Hawaii, College of Engineering
///// @brief  ee205_lab_08d_animal_farm_1 - EE 205 - Spr 2022
/////
///// @file test.cpp
///// @version 1.0
/////
///// @author Maxwell Pauly <mgpauly@hawaii.edu>
///// @date   19_Mar_2022
/////////////////////////////////////////////////////////////////////////////////
//#include "main.h"
//
//int catDatabaseTest() {
//    struct cat cats[MAX_CATS];
//    struct cat newCat = {.name="Max\0", .gender=MALE, .breed=MAINE_COON, .isFixed=true, .weight=12.2};
//    struct cat newCat2 = {.name="Ashten\0", .gender=MALE, .breed=MAINE_COON, .isFixed=true, .weight=12.2};
//    cats[1] = newCat2;
//
//    fprintf(stdout,"cat1: %s %s %s %s %f\n", cats[0].name, cats[0].gender==1?"MALE":"NotMAle", cats[0].breed==1?"Maine Coon":"something else", cats[0].isFixed?"true":"false", cats[0].weight);
//    fprintf(stdout,"cat1: %s %s %s %s %f\n", cats[1].name, cats[1].gender==1?"MALE":"NotMAle", cats[1].breed==1?"Maine Coon":"something else", cats[1].isFixed?"true":"false", cats[1].weight);
//
//    initializeCatsStructArray(cats);
//
//    fprintf(stdout,"cat1: %s %s %s %s %f\n", cats[0].name, cats[0].gender==1?"MALE":"NotMAle", cats[0].breed==1?"Maine Coon":"something else", cats[0].isFixed?"true":"false", cats[0].weight);
//    fprintf(stdout,"cat1: %s %s %s %s %f\n", cats[1].name, cats[1].gender==1?"MALE":"NotMAle", cats[1].breed==1?"Maine Coon":"something else", cats[1].isFixed?"true":"false", cats[1].weight);
//
//    return 0;
//}
//
//int addCatTests() {
//
//    //isDbFull
//    NumCats testTotalCats = MAX_CATS;
//    bool isFull = isDbFull(testTotalCats);
//    fprintf(stdout,"totalCats = %lu\n", testTotalCats);
//    fprintf(stdout,isFull?"full\n":"notFull\n");
//    testTotalCats = 0;
//    isFull = isDbFull(testTotalCats);
//    fprintf(stdout,"totalCats = %lu\n", testTotalCats);
//    fprintf(stdout,"isDBFull = %s\n\n",isFull?"full":"notFull");
//
//    //isCatNameEmpty
//    char name[MAX_CAT_NAME] = "\0";
//    fprintf(stdout,"name = %s\n", name);
//    fprintf(stdout,"isCatNameEmpty = %s\n", isCatNameEmpty(name)?"true":"false");
//    strcpy(name, "newName");
//    fprintf(stdout,"name = %s\n", name);
//    fprintf(stdout,"isCatNameEmpty = %s\n\n", isCatNameEmpty(name)?"true":"false");
//
//    //isNameLargerThan30Char
//    fprintf(stdout,"name = %s\n", name);
//    fprintf(stdout,"isNameLargerThan30Char = %s\n", isNameLargerThan30Char(name)?"true":"false");
//    strcpy(name, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
//    fprintf(stdout,"name = %s\n", name);
//    fprintf(stdout,"isNameLargerThan30Char = %s\n\n", isNameLargerThan30Char(name)?"true":"false");
//
//    //isWeightLargerThanZero
//    Weight weight = 0.0;
//    fprintf(stdout,"weight = %f\n", weight);
//    fprintf(stdout,"isWeightLargerThanZero = %s\n", isWeightLargerThanZero(&weight)?"true":"false");
//    weight = 1.0;
//    fprintf(stdout,"weight = %f\n", weight);
//    fprintf(stdout,"isWeightLargerThanZero = %s\n\n", isWeightLargerThanZero(&weight)?"true":"false");
//
//    //addCat
//    struct cat testCatStructArray[MAX_CATS];
//    initializeCatsStructArray(testCatStructArray);
//    fprintf(stdout,"testTotalCats = %lu\n", testTotalCats);
//    fprintf(stdout,"cat[0].name = %s\n", testCatStructArray[0].name);
//    Weight w = 3.8;
//    addCat(testCatStructArray, &testTotalCats, "mittens", MALE, MAINE_COON, true, &w);
//    fprintf(stdout,"testTotalCats = %lu\n", testTotalCats);
//    fprintf(stdout,"cat[0].name = %s cat[0].Weight = %f\n\n", testCatStructArray[0].name, testCatStructArray[0].weight);
//
//    return 0;
//}
//
//int deleteCatsTest() {
//
//    struct cat testCatStructArray[MAX_CATS];
//    NumCats testTotalCats = 0;
//    Weight w = 8.92;
//    Weight w2 = 3.2;
//    Weight w3 = 3.4;
//    Weight w4 = 3.5;
//    Weight w5 = 89.3;
//    Weight w6 = 3.2;
//    addCat(testCatStructArray, &testTotalCats, "mittens", MALE, MAINE_COON, true, &w);
//    addCat(testCatStructArray, &testTotalCats, "jess", MALE, MAINE_COON, true, &w6);
//    addCat(testCatStructArray, &testTotalCats, "anothony", MALE, MAINE_COON, true, &w2);
//    addCat(testCatStructArray, &testTotalCats, "tim", MALE, MAINE_COON, true, &w3);
//    addCat(testCatStructArray, &testTotalCats, "john", MALE, MAINE_COON, true, &w4);
//    addCat(testCatStructArray, &testTotalCats, "sam", MALE, MAINE_COON, true, &w5);
//    printAllCats(testCatStructArray, &testTotalCats);
//    fprintf(stdout,"\n\n");
//    deleteCat(testCatStructArray, &testTotalCats, 4);
//    printAllCats(testCatStructArray, &testTotalCats);
//    deleteAllCats(testCatStructArray, &testTotalCats);
//    printAllCats(testCatStructArray, &testTotalCats);
//
//    return 0;
//}
//
//int updateCatsTest() {
//    struct cat testCatStructArray[MAX_CATS];
//    NumCats testTotalCats = 0;
//    initializeCatsStructArray(testCatStructArray);
//    Weight w = 14.32;
//    addCat(testCatStructArray, &testTotalCats, "mittens", MALE, MAINE_COON, false, &w);
//    Weight w2 = 32.1;
//    addCat(testCatStructArray, &testTotalCats, "ralph", MALE, MAINE_COON, false, &w2);
//
//    updateCatName(testCatStructArray, &testTotalCats, 0, "ralph");
//    updateCatName(testCatStructArray, &testTotalCats, 0, "kevin");
//    updateCatName(testCatStructArray, &testTotalCats, 0, "carter");
//    updateCatName(testCatStructArray, &testTotalCats, 0, "");
//
//    fixCat(testCatStructArray, 0);
//
//    Weight w3 = 11.2;
//    updateCatWeight(testCatStructArray, 0, &w3);
//
//    return 0;
//}
//
//int reportCatsTest() {
//    struct cat testCatArray[MAX_CATS];
//    NumCats testTotalCats = 0;
//    initializeCatsStructArray(testCatArray);
//    Weight w = 13.8;
//    initializeCatsStructArray(testCatArray);
//    addCat(testCatArray, &testTotalCats, "mittens", MALE, MAINE_COON, true, &w);
//    Weight w2 = 18.2;
//    addCat(testCatArray, &testTotalCats, "ginger", FEMALE, UNKNOWN_BREED, false, &w2);
//    //print cat
//    printCat(testCatArray, testTotalCats, 0);
//    fprintf(stdout,"\n");
//
//    //find cat
//    Weight w3 = 19.2;
//    addCat(testCatArray, &testTotalCats, "johnson", MALE, MAINE_COON, false, &w3);
//    fprintf(stdout,"findCat = %d\n", findCat(testCatArray, &testTotalCats, "mittens"));
//    fprintf(stdout,"findCat = %d\n", findCat(testCatArray, &testTotalCats, "ginger"));
//    fprintf(stdout,"findCat = %d\n", findCat(testCatArray, &testTotalCats, "johnson"));
//    fprintf(stdout,"findCat = %d\n", findCat(testCatArray, &testTotalCats, "niice"));
//    fprintf(stdout,"findCat = %d\n\n", findCat(testCatArray, &testTotalCats, "jokjniice"));
//
//    //print all cats
//    printAllCats(testCatArray, testTotalCats);
//    return 0;
//}
//void printStars() {
//    fprintf(stdout,"##################################################\n");
//}
//
//#ifdef DEBUG
//int main() {
//    fprintf(stdout,"Data Base Test\n");
//    printStars();
//    fprintf(stdout,catDatabaseTest()?"test failed\n":"tests passed\n");
//    fprintf(stdout,"\n\n");
//
//    fprintf(stdout,"Add Cats Test\n");
//    printStars();
//    fprintf(stdout,addCatTests()?"tests failed\n":"tests passed\n");
//    fprintf(stdout,"\n\n");
//
//    fprintf(stdout,"Delete Cats Test\n");
//    printStars();
//    fprintf(stdout,deleteCatsTest()?"tests failed\n":"tests passed\n");
//    fprintf(stdout,"\n\n");
//
//    fprintf(stdout,"Update Cats Test\n");
//    printStars();
//    fprintf(stdout,updateCatsTest()?"tests failed\n":"tests passed\n");
//    fprintf(stdout,"\n\n");
//
//    fprintf(stdout,"Report Cats Test\n");
//    printStars();
//    fprintf(stdout,reportCatsTest()?"tests failed\n":"tests passed\n");
//    fprintf(stdout,"\n\n");
//
//    fprintf(stdout,"Tests Complete\n");
//
//    return 0;
//}
//#endif
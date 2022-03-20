cmake_minimum_required(VERSION 3.21)
project(ee205_lab_08d_animal_farm_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_08d_animal_farm_1 addCats.cpp catDatabase.cpp deleteCats.cpp main.cpp main.h reportCats.cpp test.cpp updateCats.cpp util.cpp)

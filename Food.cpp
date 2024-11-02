//
// Created by Hemanth Kumar on 02/11/24.
//
#include "cmake-build-debug/Food.h"

const char* RecommendMeAFood(char firstLetter) {
    if (firstLetter == 'a' || firstLetter == 'A') {
        return "Apple";
    }else if (firstLetter == 'b' || firstLetter == 'B') {
        return "Banana";
    }else if (firstLetter == 'c' || firstLetter == 'C') {
        return "Chocolate cake";
    }else {
        return "Pizza";
    }
}
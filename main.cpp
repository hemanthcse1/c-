#include <iostream>

#include "cmake-build-debug/Food.h"
#include "cmake-build-debug/IncrementCounter.h"

int main() {

    doIncrement();

    std::cout << "Today, I will eat " <<RecommendMeAFood('c') << std::endl;

    return 0;
}


//
// Created by Hemanth Kumar on 02/11/24.
//

#include "cmake-build-debug/IncrementCounter.h"

#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

int counter;


void incrementCounter(int numIncrements) {
    for (int i = 0; i < numIncrements; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        ++counter;
    }
}

void doIncrement() {
    const int numThreads = 5;
    const int numIncrements = 1000;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.push_back(std::thread(&incrementCounter, numIncrements));
    }

    for (auto& t : threads) {
        t.join();
    }
    std::cout << "Final counter value: " << counter << std::endl;
}
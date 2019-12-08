// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: December 2019
// This program finds the largest number in the list of numbers given

#include <time.h>
#include <iostream>
#include <array>


template<size_t N>
int GreatestNumber(std::array<int, N> listOfNumbers) {
    // this functions add up all the numbers in the list

    int largest = 0;

    for (int counter = 0; counter < listOfNumbers.size(); counter++) {
        if (listOfNumbers[counter] > largest) {
            largest = listOfNumbers[counter];
        }
    }
    return largest;
}


main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int aSingleRandomNumber = 0;
    int largest = 0;

    srand(time(NULL));

        std::cout << "The numbers are: ";
        for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
            aSingleRandomNumber = (rand() % 10) + 1;
            randomNumbers[loop_counter] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << " " << std::endl;

        largest = GreatestNumber(randomNumbers);

        std::cout << "The greatest number is: " << largest << std::endl;
}

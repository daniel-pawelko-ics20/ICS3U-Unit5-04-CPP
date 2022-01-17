// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Volume of cylinder

#include <iostream>
#include <string>
#include <math.h>

float volume(int height, int radius) {
    // volume function to calculate volume of cylinder
    // process
    return M_PI * radius * radius * height;
}

int main() {
    // main function for calling volume function

    // defining variables
    std::string temp;
    int height_inp;
    int radius_inp;

    // details
    std::cout << "This program calculates the volume of a cylinder.";
    std::cout << std::endl;

    try {
        // input
        std::cout << "Radius of cylinder (mm): ";
        std::cin >> temp;
        radius_inp = std::stoi(temp);
        std::cout << "Height of cylinder (mm): ";
        std::cin >> temp;
        height_inp = std::stoi(temp);

        // process/output
        std::cout << "The volume of a cylinder with a radius of " << radius_inp;
        std::cout << " mm and height of " << height_inp << " mm is ";
        std::cout << volume(height_inp, radius_inp) << " mm³." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Input must be an integer" << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}

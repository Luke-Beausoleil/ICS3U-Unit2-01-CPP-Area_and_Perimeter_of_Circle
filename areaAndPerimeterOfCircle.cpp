// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: April 2021
// This program calculates area and perimeter of a circle
//    with radius 15 mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has radius: " << std::endl;
    std::cout << "15 mm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "The area is " << M_PI * pow(15, 2) << "mm²" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "The perimeter is " << 2 * M_PI * 15 << "mm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}

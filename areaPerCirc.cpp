// Copyright 2022 Carolyn
// Created by: Carolyn Webster Pless
// Created on: 2022/09/21
// Calculates the area and perimeter of a circle which has the radius of 15mm

#include <cmath>
#include <iostream>

int main() {
    std::cout << "For a circle with a radius of 15mm:\n";
    std::cout << "The area is = " <<M_PI * pow(15, 2) << " mm^2\n";
    std::cout << "The perimeter is = " <<2 * M_PI * 15 << " mm\n";
}

// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: September 26, 2023
// This program calculates the area and perimeter of a rectangle with user input

#include <cmath>
#include <iostream>

int main() {
    // declare variables
    int length, width, perimeter, area;

    // get the length and width
    std ::cout << "Area and Perimeter of a Rectangle" << std::endl;
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // calculate the area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display the area and perimeter
    std ::cout << "The area is " << area << " cm^2" << std::endl;
    std ::cout << "The perimeter is " << perimeter << " cm" << std::endl;
}

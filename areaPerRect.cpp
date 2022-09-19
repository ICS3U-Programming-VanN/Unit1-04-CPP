// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: September 18th, 2022
// This program prints out the area and perimeter of a
// rectangle with a length of 12cm and width of 2533cm.


// Allows features for the program
#include <cmath>
#include <iostream>

// Outputs area and perimeter of rectangle.
int main() {
    std::cout << "For a rectangle with Length: 12cm and Width: 2533cm...\n";
    std::cout << "Area = " << 12 * 2533 << "cm^2" << std::endl;
    std::cout << "Perimeter = " << 2 * (12 + 2533) << "cm" << std::endl;
}

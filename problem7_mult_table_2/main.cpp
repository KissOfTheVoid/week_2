////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 7: "Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for two numbers, 1 <= (m, n) <= 8 and prints a rectangle
/// multiplication table aligning output at tab positions.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip> // For std::setw to align output

int main() {
    int m, n;

    // Ask the user for input, ensuring m and n are within the specified range
    do {
        std::cout << "Enter two numbers (1 <= m, n <= 8): ";
        std::cin >> m >> n;
    } while (m < 1 || m > 8 || n < 1 || n > 8);

    // Print the header row
    std::cout << "  ";
    for (int i = 1; i <= n; ++i) {
        std::cout << std::setw(3) << i;
    }
    std::cout << std::endl;

    // Print the multiplication table
    for (int i = 1; i <= m; ++i) {
        std::cout << i << " ";
        for (int j = 1; j <= n; ++j) {
            std::cout << std::setw(3) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}


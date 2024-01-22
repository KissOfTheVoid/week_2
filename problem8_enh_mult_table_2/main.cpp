////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 8: "Enhanced Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Modification of the Problem 7 (Multiplication Table), where a user can
/// repeat a solution multiple times (with using the “do..while” loop).
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip> // For std::setw to align output

int main() {
    char repeat;

    do {
        int m, n;

        // Ask the user for input
        std::cout << "Enter two numbers (1 <= m, n <= 8): ";

        // Check if the input is a valid integer
        if (std::cin >> m >> n) {
            // Check if the input is within the specified range
            if (m >= 1 && m <= 8 && n >= 1 && n <= 8) {
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
            } else {
                std::cout << "Invalid input. Please enter numbers within the specified range." << std::endl;
            }
        } else {
            std::cout << "Invalid input. Please enter valid numbers." << std::endl;
            std::cin.clear(); // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the input line
        }

        std::cout << "Do you want to repeat? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}


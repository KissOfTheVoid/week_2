////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 5: "Print ASCII table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Print the “printable part” of the ASCII table using tabs for aligning.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip> // For std::setw to align output

int main() {
    const int firstPrintableASCII = 32; // First printable ASCII character
    const int lastPrintableASCII = 126; // Last printable ASCII character
    const int columns = 4; // Number of columns for output

    int count = 0;

    for (int i = firstPrintableASCII; i <= lastPrintableASCII; ++i) {
        std::cout << std::setw(3) << i << " '" << static_cast<char>(i) << "'\t";
        if (++count % columns == 0) {
            std::cout << std::endl; // New line after every 'columns' characters
        }
    }

    return 0;
}

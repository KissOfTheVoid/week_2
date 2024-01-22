////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 4: "Some functions for dealing with strings".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Try to use functions for dealing with strings:
/// 1) strcmp, strlen for c-strings;
/// 2) string:: size(), length(), operator<, operator+, operator= etc for
///    std::string-s.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring> // For C-string functions
#include <string>

int main() {
    // Working with C-strings
    const char* c_string1 = "Hello";
    const char* c_string2 = "World";

    // Using strcmp
    if (strcmp(c_string1, c_string2) == 0) {
        std::cout << "C-strings are equal." << std::endl;
    } else {
        std::cout << "C-strings are not equal." << std::endl;
    }

    // Using strlen
    std::cout << "Length of c_string1: " << strlen(c_string1) << std::endl;
    std::cout << "Length of c_string2: " << strlen(c_string2) << std::endl;

    // Working with std::string
    std::string cpp_string1 = "Hello";
    std::string cpp_string2 = "World";

    // Using std::string operators and methods
    if (cpp_string1 < cpp_string2) {
        std::cout << cpp_string1 << " is less than " << cpp_string2 << std::endl;
    } else {
        std::cout << cpp_string1 << " is not less than " << cpp_string2 << std::endl;
    }

    // Using size() and length() (they are equivalent)
    std::cout << "Length of cpp_string1: " << cpp_string1.size() << std::endl;
    std::cout << "Length of cpp_string2: " << cpp_string2.length() << std::endl;

    // Concatenating strings using operator +
    std::string combined = cpp_string1 + " " + cpp_string2;
    std::cout << "Concatenated string: " << combined << std::endl;

    // Assigning string using operator =
    std::string copy = cpp_string1;
    std::cout << "Copied string: " << copy << std::endl;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 6: "String indices".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Work with operator[], and length() property. Consider valid indices of an
/// std::string object.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, World!";
    
    // Using the [] operator to access characters by index
    char firstChar = myString[0]; // The first character (index 0)
    char fifthChar = myString[4]; // The fifth character (index 4)
    
    // Using the length() method to get the length of the string
    int length = myString.length(); // The length of the string
    
    std::cout << "The first character: " << firstChar << std::endl;
    std::cout << "The fifth character: " << fifthChar << std::endl;
    std::cout << "The length of the string: " << length << std::endl;
    
    return 0;
}

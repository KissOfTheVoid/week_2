////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 1: "Hello, %username%".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for their name and then outputs "Hello, <user>",
/// where <user> is the name the user.
///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Как вас зовут? ";
    std::getline(std::cin, name); //use getline for allowing spaces
    std::cout << "Привет, " << name << "!" << std::endl;
    return 0;
}

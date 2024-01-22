////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: "Reading text strings using getline".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Train reading text string with spaces and other special symbol using
/// cin.getline() for c-strings and std::getline() for std::string-s.
/// Then, consider the “read lines until first empty line” idiom.
///
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>
#include <limits>

int main() {
    const int BUFFER_SIZE = 256; // Buffer size for the C-string
    char c_string[BUFFER_SIZE]; // Buffer to store the C-string

    std::cout << "Введите строку с пробелами и спецсимволами для C-строки: ";
    std::cin.getline(c_string, BUFFER_SIZE);
    std::cout << "Считанная C-строка: " << c_string << std::endl;

    // Clearing the input buffer to prevent skipping the next user input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    std::string cpp_string;
    std::cout << "Введите строку с пробелами и спецсимволами для std::string: ";
    std::getline(std::cin, cpp_string);
    std::cout << "Считанная std::string строка: " << cpp_string << std::endl;

    // Reading lines until the first empty line is encountered
    std::cout << "Введите несколько строк (для окончания введите пустую строку):" << std::endl;
    while (true) {
        std::string line;
        std::getline(std::cin, line);
        if (line.empty()) { // Check for an empty string
            break; // Exit the loop
        }
        std::cout << "Считанная строка: " << line << std::endl;
    }

    return 0;
}

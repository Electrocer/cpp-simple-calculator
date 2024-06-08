#include "userinputs.h"
#include <iostream>

int getUserInput()
{
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    
    return input;
}

std::string getUserOption()
{
    std::string input;
    std::cout << "What would you like to calculate? (Type any of these options to start: add, subtract, multiply, divide): ";
    std::cin >> input;
    
    return input;
}
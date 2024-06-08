#include "resultprinter.h"
#include <iostream>

int printResult(int num1, int num2, std::string option)
{
    if (option == "add")
    {
        return num1 + num2;
    }
    else if (option == "subtract")
    {
        return num1 - num2;
    }
    else if (option == "multiply")
    {
        return num1 * num2;
    }
    else if (option == "divide")
    {
        return num1 / num2;
    }

    return 0;
}
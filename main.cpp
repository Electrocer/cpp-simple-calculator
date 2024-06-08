#include <iostream>
#include <string>
#include "userinputs/userinputs.h"
#include "userinputs/userinputs.cpp"
#include "resultprinter/resultprinter.h"
#include "resultprinter/resultprinter.cpp"

int main()
{
    std::string option = getUserOption();

    if (option == "add" || option == "subtract" || option == "multiply" || option == "divide")
    {
        int num1 = getUserInput();
        int num2 = getUserInput();

        std::cout << "The result is " << printResult(num1, num2, option);
    }
    else
    {
        std::cout << "Invalid option";
    }

    return 0;
}
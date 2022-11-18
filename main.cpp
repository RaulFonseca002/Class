#include <iostream>
#include <Calculator.h>



int main()
{
    Calculator calculator(2,2);
    Calculator calculatorV1(9);
    Calculator* calculatorV2;
    calculatorV2 = new Calculator;
    std::cout << calculatorV2->soma() << std::endl;
    delete(calculatorV2);

    std::cout << calculator.soma() <<  std::endl;
    std::cout << calculatorV1.soma() <<  std::endl;



    return 0;
}

#include "Calculator.h"
#include <iostream>

Calculator::Calculator(float a, float b){
    this->a = a;
    this->b = b;

    std::cout << "sucess\n";
}

Calculator::Calculator(float a){
    this->a = a;
    this->b = a;

    std::cout << "sucess\n";
}

Calculator::Calculator(){
    std::cout << "sucess\n";
}

Calculator::~Calculator(){
    std::cout <<"morri!\n";
}

float Calculator::soma(){
    return this->a + this->b;
}

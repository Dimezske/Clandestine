#pragma once
#include "portfolio.h"
#include "Colors.h"
using namespace std;

class Banking : private Portfolio{

public:
    double cash_value;
    double credit_value;
    void set_cashValue(double cash);
    void set_creditValue(double credit);
    void get_cashValue();
    void get_creditValue();
    Banking() : cash_value(0.00),credit_value(0.00){
    }
};
void Banking::set_cashValue(double cash){
    cash_value = cash;
    if (cash <= 0.00){
        cash = 0.00;
    }
}
void Banking::set_creditValue(double credit){
    credit_value = credit;
}
void Banking::get_cashValue(){
    if (cash_value <= 0.00){
        cash_value = 0.00;
    }
    SetConsoleTextAttribute(hstdout, 0xB);
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << "$" << std::setprecision(2) << cash_value;
    SetConsoleTextAttribute(hstdout, 0x80);
}
void Banking::get_creditValue(){
    if (credit_value >= 0.00){
      SetConsoleTextAttribute(hstdout, 0xA);
      std::cout << std::fixed;
      std::cout << std::setprecision(2) << "$" << credit_value;
      SetConsoleTextAttribute(hstdout, 0x80);
    }
    else if (credit_value < 0.00) {
      SetConsoleTextAttribute(hstdout, 0xC);
      std::cout << std::fixed;
      std::cout << std::setprecision(2) << "-$" << credit_value;
      SetConsoleTextAttribute(hstdout, 0x80);
    }
}
Banking *money = new Banking;

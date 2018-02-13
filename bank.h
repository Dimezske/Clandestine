#pragma once
#include "Start_menu.h"
using namespace std;
class ATM{
public:
    string initals;
    int randomize_account_number = rand() % 55555555 + 1;
    int account_number;
    int pin;
    bool hasSignedUp = false;
    bool hasPin = false;
    void showBankOptions();
    void bankTellerOptions();
    void setUpAccount();
    void signUpToBank();
    void inBank();
    
    double total_funds;
    double withdraw_amount;
    double deposit_amount;
    void atmMessage();
    void atmOpen();
    void setFunds();
    void showFunds();
    void withdraw();
    void deposit();
};
void ATM::showBankOptions(){
    cout << "##################ELITEBANK##################" << endl;
    cout << "Welcome to ELITE BANK v1.1" << endl;
    cout << "To talk to a bank teller      -  press 'T' --NOTE-- Captitals" << endl;
    cout << "To use an ATM                 -  press 'A' --NOTE-- Captitals" << endl;
    cout << "To exit Bank                  -  press 'ESC'" << endl;
}
void ATM::bankTellerOptions(){
    cout << "To setup an account           -  press 'C' --NOTE-- Captitals" << endl;
    cout << "To sign up to Elite Bank      -  press 'Z' --NOTE-- Captitals" << endl;
    cout << "To go back                    -  press 'ESC'" << endl;
    bool tellerOptionsBool = true;
    while(tellerOptionsBool){
    char tellerOptions = getch();
    switch(tellerOptions){
        case 27:
            tellerOptionsBool = false;
            break;
            break;
            showBankOptions();
        case 67:
            setUpAccount();
            break;
        case 90:
            signUpToBank();
            break;
    }
    }
}
void ATM::setUpAccount(){
    if (hasSignedUp){
        cout << "Signing up account" << endl;
        sleep(1);
        account_number = randomize_account_number;
        cout << "Enter a pin" << endl;
        cin >> pin;
        cout << "Your new pin is: " << pin << endl;
        cout << "Save your pin somewhere write it down, this is !IMPORTANT!" << endl;
        cout << "Your account number is :" << account_number << endl;
        hasPin = true;
        inBank();
    }
}
void ATM::signUpToBank(){
    cout << "To sign up to elite bank you must first provide your initals" << endl;
    cin >> initals;
    cout << "Name: " << startMenu->getPlayersName() << "Initals: " << initals << endl;
    sleep(1);
    hasSignedUp = true;
    cout << "Thank you for signing up to Elite Bank" << endl;
    sleep(1);
    inBank();
}
void ATM::inBank(){
    system("color 80");
    showBankOptions();
    bool isInBank = true;
    while(isInBank){
    char options = getch();
    switch(options){
        case 27:
            cout << "Leaving Bank";sleep(1);cout << ".";sleep(1);cout << ".";sleep(1);cout << ".";
            isInBank = false;
            system("color 80");
            break;
            break;
            break;
            break;
            break;
            break;
            
        case 84:
            bankTellerOptions();
            break;
        case 65:
            atmMessage();
            break;
    }
    }
}

void ATM::atmMessage(){
    system("color 0E");
    cout << "|||||||||||||||||||||||ELITEBANK_ATM_ELITEBANK|||||||||||||||||||||||" << endl;
    cout << endl;
    cout << "                              Enter PIN#                             " << endl;
    int enter_pin;
    cin >> enter_pin;
    if (enter_pin == pin){
        atmOpen();
    }
    }
void ATM::atmOpen(){
    
    setFunds();
    cout << "|||||||||||||||||||||||ELITEBANK_ATM_ELITEBANK|||||||||||||||||||||||" << endl;
    cout << endl;
    cout << "         BAL:  $";SetConsoleTextAttribute(hstdout, 0xA);showFunds();SetConsoleTextAttribute(hstdout, 0x7);system("color 0E");
    cout << "------------------------WITHDRAW:   press 'W'" << endl;
    cout << "------------------------DEPOSIT:    press 'D'" << endl;
    cout << "To exit ATM press 'ESC'" << endl;
    bool usingATM = true;
    while(usingATM){
    char atmOptions = getch();
    switch(atmOptions){
        case 27:
            usingATM = false;
            inBank();
            break;
            
        case 87:
            setFunds();
            withdraw();
            break;
        case 68:
            setFunds();
            deposit();
            break;
        }
    }
}
void ATM::setFunds(){
    total_funds = money->credit_value;
}
void ATM::showFunds(){
    cout << std::fixed;
    cout << setprecision(2) << total_funds << endl;
}
void ATM::withdraw(){
    SetConsoleTextAttribute(hstdout, 0x7);
    cout << "Enter the amount you wish to withdraw" << endl;
    cout << "Credit: $";SetConsoleTextAttribute(hstdout, 0xA);
    cout << money->credit_value << endl;
    SetConsoleTextAttribute(hstdout, 0x7);

    cin >> withdraw_amount;

    if (money->credit_value <= 0.00){
            money->credit_value = 0.00;
    }
    if (withdraw_amount <= money->credit_value && money->credit_value > 0.00){
        
        money->credit_value -= withdraw_amount;
        money->cash_value += withdraw_amount;
        cout << "You have withdrawn: $" << withdraw_amount << endl;
    }
    else if(withdraw_amount > money->credit_value){
        cout << "Insufficent Funds!" << endl;
    }
    cout << "Cash: $";
    SetConsoleTextAttribute(hstdout, 0xA);
    cout << money->cash_value << endl;
    SetConsoleTextAttribute(hstdout, 0x7);
    cout << "Credit: $";
    SetConsoleTextAttribute(hstdout, 0xA);
    cout << money->credit_value << endl;
    SetConsoleTextAttribute(hstdout, 0x7);
}
void ATM::deposit(){
    SetConsoleTextAttribute(hstdout, 0x7);
    cout << "Enter the amount you wish to deposit" << endl;
    cout << "Cash: $";SetConsoleTextAttribute(hstdout, 0xA);
    cout << money->cash_value << endl;
    SetConsoleTextAttribute(hstdout, 0x7);
    
    cin >> deposit_amount;
    
    if (money->cash_value <= 0.00){
            money->cash_value = 0.00;
    }
    if (deposit_amount <= money->cash_value && money->cash_value > 0.00){
        cout << "You have Deposited: $" << deposit_amount << endl;
        money->cash_value -= deposit_amount;
        money->credit_value += deposit_amount;
    }
    else if(deposit_amount > money->cash_value){
        cout << "Not enough Cash!" << endl;
    }
    cout << "Cash: $";
    SetConsoleTextAttribute(hstdout, 0xA);
    cout << money->cash_value << endl;
    SetConsoleTextAttribute(hstdout, 0x7);
    cout << "Credit: $";
    SetConsoleTextAttribute(hstdout, 0xA);
    cout << money->credit_value << endl;
    SetConsoleTextAttribute(hstdout, 0x7);
}
    ATM *atm = new ATM;
    
    
    /*
    if (!(strstream_witdraw >> withdraw_amount))
    {
        // Handle error
    }
    else
    {   // Put your binary conversion logic in a function!
        std::cout << to_binary(withdraw_amount) << std::endl;
    }
*/

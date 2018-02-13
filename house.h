#pragma once

using namespace std;

class House : private Portfolio{
public:
    double price;
    string status;
    enum houseAddressName{_12_Wentworth_Ave,_62_Huntington_Crt,_145_Brimes_St};
    houseAddressName AddressName;
    House(houseAddressName address) : AddressName(address){
        
    }
    
    void viewHouses(){
        cout << houseStatus;
        houseOwn();
        cout << endl;
    }
    string HousesAdresses();
    void buyHouse1();
    void buyHouse2();
    void buyHouse3();
    void listHouseSale();
    void listHouses();
    bool ownsHouse1 = false;
    bool ownsHouse2 = false;
    bool ownsHouse3 = false;
    void houseOwn();
    void housesForSale();
    void buyHouses();
    
};
// House
    House *home1 = new House(House::_12_Wentworth_Ave);
    House *home2 = new House(House::_62_Huntington_Crt);
    House *home3 = new House(House::_145_Brimes_St);
    void House::houseOwn(){
        if (ownsHouse1){
            cout << home1->HousesAdresses();
        }
        if (ownsHouse2){
            cout << home2->HousesAdresses();
        }
        if (ownsHouse3){
            cout << home3->HousesAdresses();
        }
    }
  string House::HousesAdresses(){
     if (AddressName == 0){
          return "12 Wentworth Ave";
     }
     if (AddressName == 1){
          return "62 Huntington Crt";
     }
     if (AddressName == 2){
          return "145 Brimes St";
     }
     return 0;
   }
   
void House::buyHouse1(){
    if (money->cash_value >= 250000.00 || money->credit_value >= 250000.00){
    portfolio->numberOfHouses++;
    status = "Sold";
    Portfolio::houseStatus = "Owned: ";
    ownsHouse1 = true;
    cout << "You Bought House1"<< endl;
    }
}
void House::buyHouse2(){
    if (money->cash_value >= 278000.00 || money->credit_value >= 278000.00){
    portfolio->numberOfHouses++;
    status = "Sold";
    Portfolio::houseStatus = "Owned: ";
    ownsHouse2 = true;
    cout << "You Bought House2"<< endl;
    }
}
void House::buyHouse3(){
    if (money->cash_value >= 295000.00 || money->credit_value >= 295000.00){
    portfolio->numberOfHouses++;
    status = "Sold";
    Portfolio::houseStatus = "Owned: ";
    ownsHouse3 = true;
    cout << "You Bought House3"<< endl;
    }
}
void House::listHouseSale(){
    status = "ForSale: ";
    cout << status;
}
void House::listHouses(){
    home1->listHouseSale();
    cout << home1->HousesAdresses();
    price = 250000.00;
    SetConsoleTextAttribute(hstdout, 0x8A); 
    cout <<"\nPrice: $" << price << endl;
    SetConsoleTextAttribute(hstdout, 0x80);
    
    home2->listHouseSale();
    cout << home2->HousesAdresses();
    price = 278000.00;
    SetConsoleTextAttribute(hstdout, 0x8A); 
    cout <<"\nPrice: $" << price << endl;
    SetConsoleTextAttribute(hstdout, 0x80);
    
    home3->listHouseSale();
    cout << home3->HousesAdresses();
    price = 295000.00;
    SetConsoleTextAttribute(hstdout, 0x8A); 
    cout <<"\nPrice: $" << price << endl;
    SetConsoleTextAttribute(hstdout, 0x80);
}
void House::housesForSale(){
    cout << "\nHouses ForSale:\n";
    SetConsoleTextAttribute(hstdout, 0x80);
    home1->listHouses();
    cout << "To buy house - type 'buy 12 Wentworth Ave'\n";
    cout << "To buy house - type 'buy 62 Huntington Crt'\n";
    cout << "To buy house - type 'buy 145 Brimes St'\n";
    cout << "To enter the buy houses mode press  - '~'\n";
}
void House::buyHouses(){
            printf("Choose a Houses: \n");
            string input;
            getline(cin,input);
            if (input == "buy 12 Wentworth Ave"){
                cout << "Pay with 'Cash' or 'Card'" <<endl;
                cout << "Enter selection" << endl;
                getline(cin,input);
                if (input == "Cash" || input == "cash"){
                    if (money->cash_value >= 250000.00){ 
                        home1->buyHouse1();
                        money->cash_value -= 250000.00;
                }
                else {
                    SetConsoleTextAttribute(hstdout,0x8C);
                    cout <<"Not enough cash"<<endl;
                    SetConsoleTextAttribute(hstdout,0x80);
                }
            }
                else if (input == "Card" || input == "card"){
                    if (money->credit_value >= 250000.00){
                    home1->buyHouse1();
                    money->credit_value -= 250000.00;
                }
                else {
                    SetConsoleTextAttribute(hstdout,0x8C);
                    cout <<"Not enough funds"<<endl;
                    SetConsoleTextAttribute(hstdout,0x80);
                }
            }
        }
        if (input == "buy 62 Huntington Crt"){
            cout << "Pay with 'Cash' or 'Card'" <<endl;
            cout << "Enter selection" << endl;
            getline(cin,input);
            if (input == "Cash" || input == "cash"){
                if (money->cash_value >= 278000.00){
                    home2->buyHouse2();
                    money->cash_value -= 278000.00;
                }
                else {
                    SetConsoleTextAttribute(hstdout,0x8C);
                    cout <<"Not enough cash"<<endl;  
                    SetConsoleTextAttribute(hstdout,0x80);
                }
            }
            else if (input == "Card" || input == "card"){
                if (money->credit_value >= 278000.00){
                    home2->buyHouse2();
                    money->credit_value -= 278000.00;
            }
                else {
                    SetConsoleTextAttribute(hstdout,0x8C);
                    cout <<"Not enough funds"<<endl;
                    SetConsoleTextAttribute(hstdout,0x80);
                }
            }
        }
        if (input == "buy 145 Brimes St"){
            cout << "Pay with 'Cash' or 'Card'" <<endl;
            cout << "Enter selection" << endl;
            getline(cin,input);
            if (input == "Cash" || input == "cash"){
                if (money->cash_value >= 295000.00){
                    home3->buyHouse3();
                    money->cash_value -= 295000.00;
                }
            else { 
                SetConsoleTextAttribute(hstdout,0x8C);
                cout <<"Not enough cash"<<endl;
                SetConsoleTextAttribute(hstdout,0x80);
            }
        }
        else if (input == "Card" || input == "card"){
            if (money->credit_value >= 295000.00){
                home3->buyHouse3();
                money->credit_value -= 295000.00;
            }
            else {
                SetConsoleTextAttribute(hstdout,0x8C);
                cout <<"Not enough funds"<<endl;
                SetConsoleTextAttribute(hstdout,0x80);
            }
        }
    }
}

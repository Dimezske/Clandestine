#pragma once
#include <thread>
#include "police.h"
using namespace std;

class People{
private:
    string names[50] = {"Ebonie","Shawnee","Lindsy", "Joesph","Sherlyn","Nichole",
            "Lon","Darleen","Alpha","Ezra","Marvella","Yelena", "Eusebio", "Emeline",  
            "Darlene","Faith","Shaunna","Pauline","Alane","Amberly","Ludivina","Carlotta",  
            "Syreeta","Reiko","Avelina","Leota","Alyce","Edwin","Robert","Gertrude",
            "Janetta","Lorina","Roni","Kermit","Dana","Hellen","Benito","Tamesha",
            "Tawanna","Trudie","Chantal","Adriana","Shaunta","Lyla","Jannie",
            "Delisa","Boyd","Candelaria","Blair","Freeda"};
  
    string sexy[2] = {"Male", "Female"};
    string name;
    string sex;
    int age;
    float height;
    float weight;
    double p_money;
    
    bool takenCash = false;
    
    bool hasBackPack = false;
    bool hasLeather_Jacket = false;
    
    bool hasCiggerettes = false;
    bool hasCoke = false;
    bool hasiPhone = false;
    bool hasSamsungS6 = false;
    
    
    
public:
    string getName(){
        return name;
    }
    void setName(){
        name = names[rand() % 50+0];
    }
    int getAge(){
        return age;
    }
    void setAge(){
        age = rand() % 80 + 1;
        if (age < 16){
            age = 16;
        }
    }
    string getSex(){
        return sex; 
    }
    void setSex(){
        sex = sexy[rand() % 2+0];
    }
   
    
    void setHeight(){
        double a = 1.00;
        double b = 206.00;
        height = ((b-a)*((double)rand()/RAND_MAX))+a;
        if (height < 110.00){
            height = 110.00;
        }
    }
    void getHeight(){
        cout << std::fixed;
        cout << std::setprecision(2) << "Height:";
        cout << height << endl;
   
    }
    void setWeight(){
        double a = 1.00;
        double b = 176.00;
        weight = ((b-a)*((double)rand()/RAND_MAX))+a;
        if (weight < 55.00){
            weight = 55.00;
        }
    }
    void getWeight(){
        cout << std::fixed;
        cout << std::setprecision(2) << "Weight:";
        cout << weight << endl;
    }
    void setMoney(){
        double a = 1.00;
        double b = 2400.00;
        p_money = ((b-a)*((double)rand()/RAND_MAX))+a;
    }
    void getMoney(){
        cout << std::fixed;
        cout << std::setprecision(2) << "Cash:";
        SetConsoleTextAttribute(hstdout, 0x8A);
        cout << "$" << p_money << endl;
        SetConsoleTextAttribute(hstdout, 0x80);
    }
    
    void moneyActions(){   // Do moneyActions while(takencash == true)
        cout << "####Actions####" << endl;
        cout << "To take cash   -  press '^'" << endl;
        char takecash;
        takecash = getch();
        switch(takecash){
            case 94:
            
                cout << "taking cash";usleep(100000);cout << ".";usleep(100000);cout << ".";
                usleep(100000);cout << ".";usleep(100000);
                money->cash_value += p_money;
                stolen_money_rand = rand() % 5 + 1;
                if (stolen_money_rand > 3){
                    stolen_money += p_money;
                }
                p_money = 0.00;
                takenCash = true;
                int copscall = rand() % 10 + 1;
                if (copscall > 4){
                    copsCall();
                }
                break;
        }
    }
    string item1[7] = {"Ciggerettes","Coke","iPhone7","Samsung-S6","Backpack","Laptop-Bag","Leather-Jacket"};
    string item2[7] = {"Ciggerettes","Coke","iPhone7","Samsung-S6","Backpack","Laptop-Bag","Leather-Jacket"};
    
    string getItem1(){
        return item1[rand() % 7+0];
    }
    void showItem1(){
        srand((long)time(NULL));
        cout << getItem1();
    }
    string getItem2(){
        return item2[rand() % 6+0];
    }
    void showItem2(){
        srand((long)time(NULL));
        cout << getItem2();
    }
   
    
    void SHOW_IDENTITY(){
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        getHeight();
        getWeight();
        cout << "Gender: " << getSex() << endl;
        // - Money
        getMoney();
    }
    People(){
        // Identity
        setName();
        setAge();
        setSex();
        setHeight();
        setWeight();
        setMoney();
    }
};
People *person = new People;

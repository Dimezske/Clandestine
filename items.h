#pragma once
using namespace std;


class Windren_Ciggerettes{
private:
    bool isSmoking;
public:
    bool hasCiggerettes = false;
    int number_of_pack_of_ciggerettes = 0;
    int number_of_ciggerettes = 0;
    void generateCiggerettes(){
        srand((long)time(NULL));
        number_of_ciggerettes = 30;
    }
    void displayCiggerettes(){
        if (number_of_pack_of_ciggerettes > 0){
        cout << "Pack of Windren Ciggerettes: " << "x" << number_of_ciggerettes << "Ciggerettes" << endl; 
        }
    }
    void smokeCiggerette(){
        number_of_ciggerettes -= 1;
        isSmoking = true;
        cout << "Smoking Ciggerette.";
        sleep(1);
        cout << "." << endl;
        displayCiggerettes();
        isSmoking = false;
        if(number_of_ciggerettes <= 0){
            cout << "Pack of ciggerettes empty." << endl;
            number_of_pack_of_ciggerettes -= 1;
        }
        else if (number_of_pack_of_ciggerettes <= 0 && number_of_ciggerettes <= 0){
            cout << "No more ciggerettes!" << endl;
        }
    }
    void addPackOfCiggerettes(){
        number_of_pack_of_ciggerettes++;
    }
    void displayPacks(){
            hasCiggerettes = true;
            cout << "Windren Ciggerettes: " << number_of_pack_of_ciggerettes << endl; 
    }
    Windren_Ciggerettes(){
        generateCiggerettes();
    }
    ~Windren_Ciggerettes(){
        cout << "Ciggerette Pack Destroyed" << endl;
    }
    
};
Windren_Ciggerettes *windren_ciggerettes = new Windren_Ciggerettes;




int iterate_item = 0;
string item_names[] = {"Windren Ciggerettes 30's","1","2"};
    bool ciggerettes_equiped;
    bool one_equiped;
    bool two_equiped;
void CYCLE_ITEM_NAMES_UP(){
    iterate_item += 1;
        if (iterate_item > 2){
            iterate_item = 0;
        }
        if (iterate_item == 0){
            if (windren_ciggerettes->hasCiggerettes){
            cout << item_names[iterate_item] << endl;
            }
        }
        if (iterate_item == 1){
            cout << item_names[iterate_item] << endl;
        }
        if (iterate_item == 2){
            cout << item_names[iterate_item] << endl;
        }
    }
void CYCLE_ITEM_NAMES_DOWN(){
    iterate_item -= 1;
        if (iterate_item < 0){
            iterate_item = 2;
        }
        if (iterate_item == 0){
            if (windren_ciggerettes->hasCiggerettes){
            cout << item_names[iterate_item] << endl;
            }
        }
        if (iterate_item == 1){
            cout << item_names[iterate_item] << endl;
        }
        if (iterate_item == 2){
            cout << item_names[iterate_item] << endl;
        }
    }
void EQUIP_ITEM(){
    cout << item_names[iterate_item] << ": Equiped!" << endl;
    if (iterate_item == 0){
        ciggerettes_equiped = true;
        one_equiped = false;
        two_equiped = false;
    }
     if (iterate_item == 1){
        ciggerettes_equiped = false;
        one_equiped = true;
        two_equiped = false;
    }
     if (iterate_item == 2){
        ciggerettes_equiped = false;
        one_equiped = false;
        two_equiped = true;
    }
}

void GotSmokes(){
    while(1){
        char smokes = getch();
        switch(smokes){
            extern mainGameLoop();
            case 'f':{
                windren_ciggerettes->smokeCiggerette();
                if (windren_ciggerettes->number_of_ciggerettes <= 0){
                    windren_ciggerettes->number_of_pack_of_ciggerettes -= 1;
                }
                break;
                continue;
                continue;
            }
        }
    }
}




/*
 
  private:
    int ciggerettes;
    int backpackSlots;
    int LeatherJacketSlots;
public:
    int getCiggerettesAmount();
    void setCiggerettes();
    void displayCiggerettes();
    void smokeCiggerette();
    int getBackPackSlots();
    void setBackPackSlots(int number_of_backpack_slots);
    void displayBackPackSlots();
    int getJacketSlots();
    void setJacketSlots(int number_of_leather_jacket_slots);
    void displayJacketSlots();
* 
int Items::getCiggerettesAmount(){
        return ciggerettes;
}
    
void Items::setCiggerettes(){
    srand((long)time(NULL));
    ciggerettes = rand() % 30 + 1;
}
void Items::displayCiggerettes(){
    cout << "Pack of Ciggerettes: " << "x" << getCiggerettesAmount(); 
}
void Items::smokeCiggerette(){
    ciggerettes -= 1;
    cout << "Smoking Ciggerette.";sleep(1);cout << "." << endl;
}
    
int Items::getBackPackSlots(){
    return backpackSlots;
}
void Items::setBackPackSlots(int number_of_backpack_slots){
    backpackSlots = number_of_backpack_slots;
    srand((long)time(NULL));
    number_of_backpack_slots = rand() % 35 + 5;
}
void Items::displayBackPackSlots(){
    cout << "Backpack: " << "x" << getBackPackSlots(); 
}
    
int Items::getJacketSlots(){
    return LeatherJacketSlots;
}
void Items::setJacketSlots(int number_of_leather_jacket_slots){
    LeatherJacketSlots = number_of_leather_jacket_slots;
    srand((long)time(NULL));
    number_of_leather_jacket_slots = rand() % 8 + 2;
}
void Items::displayJacketSlots(){
    cout << "Leather-Jacket: " << "x" << getJacketSlots();
}
*/

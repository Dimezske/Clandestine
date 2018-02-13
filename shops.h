#pragma once
using namespace std;

int general_shop_iterate_item = 0;

void CYCLE_ITEM_GENERALSHOP_UP(){
    general_shop_iterate_item += 1;
        if (general_shop_iterate_item > 2){
            general_shop_iterate_item = 0;
        }
        if (general_shop_iterate_item == 0){
            cout << item_names[general_shop_iterate_item] << endl;

        }
        if (general_shop_iterate_item == 1){
            cout << item_names[general_shop_iterate_item] << endl;
        }
        if (general_shop_iterate_item == 2){
            cout << item_names[general_shop_iterate_item] << endl;
        }
    }
void CYCLE_ITEM_GENERALSHOP_DOWN(){
    general_shop_iterate_item -= 1;
        if (general_shop_iterate_item < 0){
            general_shop_iterate_item = 2;
        }
        if (general_shop_iterate_item == 0){
            cout << item_names[general_shop_iterate_item] << endl;
        }
        if (general_shop_iterate_item == 1){
            cout << item_names[general_shop_iterate_item] << endl;
        }
        if (general_shop_iterate_item == 2){
            cout << item_names[general_shop_iterate_item] << endl;
        }
    }

class Generalstore{
private:
    bool buying = true;
public:
    void viewShop(){
        cout << "_____________________________________GENERAL STORE______________________________________" << endl;
        cout << "       Windren Ciggerettes        $FREE "<< endl;
        cout << endl;
        cout << "Press - Enter to equip items" << endl;
        bool entered_generalstore_mode = true;
        while (entered_generalstore_mode){
            char enter_generalstoremode = getch();
            switch(enter_generalstoremode){
                case 13:{
                    cout << "enter" << endl;
                    viewItems();
                    break;
                }
                case 27:{
                    entered_generalstore_mode = false;
                    break;
                }
            }
        }
    }
    void viewItems(){
        while(buying){
        char selector = getch();
        switch(selector){
            case 13:{
                if (iterate_item == 0){
                    windren_ciggerettes->hasCiggerettes = true;
                    windren_ciggerettes->addPackOfCiggerettes();
                    windren_ciggerettes->displayPacks();
                    windren_ciggerettes->displayCiggerettes();
                    cout << "You Bought 1x Windren Ciggerettes" << endl;
                }
                if (iterate_item == 1){  
                }
                if (iterate_item == 2){
                }
                break;
                }
                case 27:
                    buying = false;
                    break;
                }
            char key = _getch();
            if( ( key == static_cast<char>( 0xe0 ) )|| ( key == static_cast<char>( 0x00 ) ) ){
                key = _getch();
            }
            switch(key){ 
            case 'H':{
                CYCLE_ITEM_GENERALSHOP_UP();
                break;
            }
            case 'P': {
                CYCLE_ITEM_GENERALSHOP_DOWN();
                break;
                }
            }
        }
    }
};
Generalstore *generalstore = new Generalstore;

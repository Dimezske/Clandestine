#pragma once
using namespace std;

class Inventory{
private:
    bool test_equip = true;
public:
    void showInventory(){
        cout << "____________________________________INVENTORY____________________________________" << endl;
        cout << "Press - Enter to equip items" << endl;
        windren_ciggerettes->displayPacks();
        bool entered_equip_mode = true;
        while (entered_equip_mode){
            char enter_equipmode = getch();
            switch(enter_equipmode){
                case 13:{
                    cout << "enter" << endl;
                    equipItems();
                    break;
                }
                case 27:{
                    entered_equip_mode = false;
                    break;
                }
            }
        }
    }
    void equipItems(){
        while(test_equip){
        char selector = getch();
        switch(selector){
            case 'e':
            if (iterate_item == 0){
                EQUIP_ITEM();
                
            }
            if (iterate_item == 1){
                EQUIP_ITEM();
            }
            if (iterate_item == 2){
                EQUIP_ITEM();
            }
            break;
            case 27:
                test_equip = false;
                break;
            }
            char key = _getch();
            if( ( key == static_cast<char>( 0xe0 ) )|| ( key == static_cast<char>( 0x00 ) ) ){
                key = _getch();
            }
            switch(key){ 
            case 'H':{
                CYCLE_ITEM_NAMES_UP();
                break;
            }
            case 'P': {
                CYCLE_ITEM_NAMES_DOWN();
                break;
                }
            }
        }
    }
};
Inventory *inventory = new Inventory;

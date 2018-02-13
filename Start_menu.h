#pragma once
#include <thread>
#include "items.h"
#include "Player.h"
using namespace std;
class Start_Menu{
private:
public:
    void setPlayersName(){
        player->setName();
    }   
    string getPlayersName(){
        return player->getName();
    }
    Start_Menu(){
        cout << "##########################CLANDESTINE##########################" << endl;
        cout << endl;
        cout << "                 Welcome to Clandestine 1.2 alpha              " << endl;
        cout << " To begin enter your name" << endl;
        setPlayersName();
        cout << "The name you have Choosen: " << getPlayersName() << endl;
        cout << "Enter Admin Password" << endl;
        string getADMIN;
        cin >> getADMIN;
        if (getADMIN == "Dimez"){
            
        }
        else if (getADMIN == "Test"){
            
            cout << "press 1 for smoke" << endl;
            cout << "press 2 for items" << endl;
            bool test__ = true;
            while(test__){
                char test = getch();
                switch(test){
                
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
        else {
        sleep(1);
        cout << "Please Wait";
        usleep(500000); cout << ".";
        usleep(500000); cout << ".";
        usleep(500000); cout << ".";
        usleep(500000); cout << ".";
        usleep(500000); cout << ".";
        usleep(500000); cout << ".";
        usleep(500000); cout << "." << endl;
        sleep(3);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "Portfolio.h" << endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "Banking.h"<< endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "Bank.h"<< endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "stockmarket.h"<< endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "House.h"<< endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "bitcoin.h"<< endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "people.h"<< endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "police.h"<< endl;
        usleep(200000);
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "Player.h"<< endl;
        cout << "Loading files";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        usleep(100000); cout << "#";
        cout << "Colors.h"<< endl;
        usleep(400000);
        cout << "Finished loading files" << endl;
        sleep(3);
    }
    }
};
Start_Menu *startMenu = new Start_Menu;

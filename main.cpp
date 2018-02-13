#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <random>
#include <string>
#include <thread>
#include <ctime>
#include <chrono>
#include <unistd.h>
#include <conio.h>
#include <windows.h> 
#include <time.h>

// Header Files
#include "portfolio.h"
#include "banking.h"
#include "bank.h"
#include "house.h"
#include "bitcoin.h"
#include "people.h"
#include "police.h"
#include "items.h"
#include "shops.h"
// system
#include "Inventory.h"
#include "Player.h"
#include "stockmarket.h"
#include "Start_menu.h"
#include "Colors.h"


using namespace std;

void pressCommands(){
    bool TextLoop = true;
    while(TextLoop){
    char pressLoop;
    pressLoop = getch();
    switch(pressLoop){
    
    case 33:
    {
        cout << "####Actions####" << endl;
        cout << "while in '!' To view a person's ID type    -    'ID'" << endl;
        string commands;
        getline(cin,commands);
        if (commands == "ID"){
            person->SHOW_IDENTITY();
            cout << "Press 'TAB' To Take Money"; 
            char actions;
            actions = getch();
            switch(actions){
                case 9:
                    person->moneyActions();
            }
        }
        break;
    }
    case 64:
    {
        cout << "@" << endl;
        string speech;
        getline(cin,speech);
        break;
    }
    case 35:
    {
        cout << "#" << endl;
        delete person;
        new People();
        break;
    }
    case 41:
    {
        cout << "Exiting Area.";
        usleep(10000);
        cout << ".";
        usleep(10000);
        cout << "." << endl;
        new People();
        TextLoop = false;
        break;
        break;
    }
  }
}
}

void stockMarketCommands(){
    system("color 01");
        cout << "#######################STOCKMARKET#####################" << endl;
        showStockInstructions();
        bool stock = true;
        while(stock){
        char pressLoop = getch();
        switch(pressLoop){
            case 41:
                cout << "Leaving stock market.";sleep(1);cout << ".";sleep(1);cout << ".";sleep(1);cout << ".";
                stock = false;
                system("color 80");
                break;
                break;
            case 27:
                showStockInstructions();
                break;
            case 13:
                cout << "-STOCK-      -VOL-     -BID-           -OFFER-" << endl;
                SetConsoleTextAttribute(hstdout, 0xD);
                show_DASCCU_Name();
                SetConsoleTextAttribute(hstdout, 0x7);
                SetConsoleTextAttribute(hstdout, 0xB);
                cout << DASCCU_Stocks << std::setw(10);
                SetConsoleTextAttribute(hstdout, 0x7);  
                show_DASCCU_thread1();
                show_DASCCU_thread2();
            
                SetConsoleTextAttribute(hstdout, 0xD);
                show_KELIX_Name();
                SetConsoleTextAttribute(hstdout, 0x7);
                SetConsoleTextAttribute(hstdout, 0xB);
                cout << KELIX_Stocks << std::setw(10);
                SetConsoleTextAttribute(hstdout, 0x7);  
                show_KELIX_thread1();
                show_KELIX_thread2();
                cout << "\n";
                printTime();
                break;
            case 'x':
                cout << "---------------------Company profiles---------------------" << endl;
                cout << "DASCCU - This company is about a local stock exchange, Established 2018." << endl;
                cout << "KELIX  - Kelix was established in 2018 as a local commodity exchange.Kelix deals with Oil and Gas commodities and is rumored to establish gold and silver commodities" << endl;
                break;
            case 'b':
                if (iterate_stock == 1){
                    buyDASCCU_Stock();
                }
                if (iterate_stock == 2){
                    buyKELIX_Stock();
                }
                break;
            case 's':
                if (iterate_stock == 1){
                    sellDASCCU_Stock();
                }
                if (iterate_stock == 2){
                    sellKELIX_Stock();
                }
                break;
            case 9:
                View_Portfolio();
                break;
        }
            char key = _getch();
                if( ( key == static_cast<char>( 0xe0 ) )|| ( key == static_cast<char>( 0x00 ) ) ){
                    key = _getch();
                }
            switch(key){ 
                case 'K':{
                    break;
                }
                case 'M':{
                    break;
                }
                case 'H':{
                    CYCLE_STOCK_NAMES_UP();
                    break;
                }
                case 'P': {
                    CYCLE_STOCK_NAMES_DOWN();
                    break;
                }
                default :{
                    break;
                }
            }  
        }
}
void showActionsMenu(){
    cout << "Actions_________________________________" << endl;
    cout << "To view these actions    - press 'ESC'\n";
    cout << "To enter type mode       - press '~'\n";
    cout << "To view houses           - press 'h'\n";
    cout << "To view portfolio        - press 'p'\n";
    cout << "To mine bitcoin          - press 'b'\n";
    cout << "To trade stocks          - press 'TAB'\n";
    cout << "To goto the bank         - press '+'\n";
    cout << "To explore               - press 'x'\n\n";
        
    cout << "While exploring          - press '!' for commands\n";
    cout << "While exploring          - press '@' to talk\n";
    cout << "While exploring          - press '#' to select\n";
    cout << "While exploring          - press ')' to exit area\n";
}
void Explore(){
    cout << "Exploring.";usleep(100000);
    cout << '.';usleep(100000);
    cout << '.';usleep(100000);
    cout << '.';usleep(100000);
    cout << ".\n";
    int random_situations;
    random_situations = rand() % 3 + 1;
    if (random_situations == 3){
        cout << "You have encountered something." << endl;
        pressCommands();
    } 
}
extern void mainGameLoop(){
   system("color 80"); 
    //THREADS
    thread Cops(Cops_PassBy_thread);
    thread DASCCU1(DASCCU_thread1);
    thread DASCCU2(DASCCU_thread2);
    thread KELIX1(KELIX_thread1);
    thread KELIX(KELIX_thread2);
    // ITEMS
    
    // NameSets
    setDASCCU_Name();
    setKELIX_Name();
    
    int houselist[3];
    houselist[0] = House::_12_Wentworth_Ave;
    houselist[1] = House::_62_Huntington_Crt;
    houselist[2] = House::_145_Brimes_St;

    std::vector<int> Houses;
    Houses.push_back(houselist[0]);
    Houses.push_back(houselist[1]);
    Houses.push_back(houselist[2]);

    showActionsMenu();
        
    bool enterTextLoop = true;
    while(enterTextLoop){
    char selectText;
    selectText = getch();
    switch(selectText){
    case 's':
    cout << "shops" << endl;
        generalstore->viewShop();
        break;
    case 'b':
        bitcoin->commenceBitcoin();
        break;
    case 'i':
        inventory->showInventory();
        break;
    case 'p':
        printf("Cash: "); money->get_cashValue(); cout << endl;
        printf("Credit: "); money->get_creditValue(); cout << endl;
        printf("Bitcoin:"); bitcoin->showBits(); cout << endl;
        cout << "Number of Houses: ";
        cout << portfolio->viewNumberOfHouses() << "\n";
        cout << "Houses: " << endl;
        home1->viewHouses();
        home2->viewHouses();
        home3->viewHouses();
        if (bitcoin->bits > 0.00000000){
        cout << "\t To sell bitcoin press 's'"<< endl;
        char selectSellBitcoin;
        selectSellBitcoin = getch();
        switch(selectSellBitcoin){
           
            case 's':
            if (bitcoin->bits > 0.00000000){
                bitcoin->sellBits();
                SetConsoleTextAttribute(hstdout, 0x2);
                cout << "Bitcoins Sold" << endl;
                SetConsoleTextAttribute(hstdout, 0x80);
                break;
                break;
            }
        }
    }
        break;
    case 'h':{
        home1->housesForSale();
        char BUYHOUSE = getch();
        switch(BUYHOUSE){
        case '~':
            home1->buyHouses();
            break;
        }
        break;
    }
    case 'x':
        Explore();
        break;
    case 9:
        stockMarketCommands();
        break;
    case 27:
    //-TODO add buy house listing menu
        showActionsMenu();
        break;
    case 43:
        atm->inBank();
        break;
    case 53:
        playSirens();
        break;
    case '~':
        break;
    }
    while(ciggerettes_equiped){
        GotSmokes();
    }
    } 
}
int main(){
    mainGameLoop();
  
}

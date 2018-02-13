#pragma once
using namespace std;
// The function we want to execute on the new thread.
    double DASCCU_stockCostResult;
    double DASCCU_TREND_VALUE;
    double DASCCU_currency = 0.00;
    double DASCCU_currency_extra = 0.00;
    int DASCCU_statistics = 0;
    bool DASCCU_isPlus;
    bool DASCCU_isMinus;
    int DASCCU_Stocks;
    long long unsigned int number_of_DASCCU = 0;
    double store_DASCCU_Price;
    double DASCCU_stockPrice = 16.00;
    double DASCCU_total_stock_price;
    
    double KELIX_stockCostResult;
    double KELIX_TREND_VALUE;
    double KELIX_currency = 0.00;
    double KELIX_currency_extra = 0.00;
    int KELIX_statistics = 0;
    bool KELIX_isPlus;
    bool KELIX_isMinus;
    int KELIX_Stocks;
    long long unsigned int number_of_KELIX = 0;
    double store_KELIX_Price;
    double KELIX_stockPrice = 48.00;
    double KELIX_total_stock_price;
    
    // STOCK MARKET INSTRUCTIONS
    void showStockInstructions(){
        cout << "Welcome to the stock market  v1.3" << endl;
        cout << "To View portfolio         -  press 'TAB'" << endl;
        cout << "To choose stocks use the 'UP' & 'DOWN arrow keys" << endl;
        cout << "To buy stocks             - press 'b'" << endl;
        cout << "To sell stocks            - press 's'" << endl;
        cout << "To view Company details   - press 'x'" << endl;
        cout << "To Leave the stock market - press ')'" << endl;
        cout << "To view these actions again press 'ESC'" << endl;
    }
    
    // DASCCU
    void setCurrency_DASCCU_extra_rand(){
        double a = 0.00;
        double b = 0.63;
        DASCCU_currency_extra = ((b-a)*((double)rand()/RAND_MAX))+a;
    }
    void setTrend_DASCCU_rand(){
        double a = 0.00;
        double b = 0.358;
        DASCCU_TREND_VALUE = ((b-a)*((double)rand()/RAND_MAX))+a;
    }
    void DASCCU_thread1(){
        while(1){
            int randomize_LAW;
            randomize_LAW = rand() % 50 + 1;
            
            if (randomize_LAW > 25){
                DASCCU_currency += DASCCU_TREND_VALUE;
                sleep(DASCCU_TREND_VALUE);
            }
            if (randomize_LAW < 25){
                DASCCU_currency -= DASCCU_TREND_VALUE;
                sleep(DASCCU_TREND_VALUE);
            }
        }
    }   
    void DASCCU_thread2(){
        while(1){
        DASCCU_statistics = rand() % 10400 + 1;
        if (DASCCU_statistics < 4999){
            DASCCU_isPlus = false;
            DASCCU_isMinus = true;
            setCurrency_DASCCU_extra_rand();
            DASCCU_currency -= DASCCU_currency_extra;
            DASCCU_Stocks -= DASCCU_currency_extra * 100;
            
        }
        else if(DASCCU_statistics > 4999){
            DASCCU_isMinus = false;
            DASCCU_isPlus = true;
            setCurrency_DASCCU_extra_rand();
            DASCCU_currency += DASCCU_currency_extra;
            DASCCU_Stocks += DASCCU_currency_extra * 100;
        }
        sleep(2);
        }
    }
    void setDASCCU_STOCKS(){
        cout << "STOCK-COST: $";
        DASCCU_stockCostResult = DASCCU_stockPrice * DASCCU_currency / 2;
        SetConsoleTextAttribute(hstdout, 0xA);
        cout << std::fixed;
        cout << std::setprecision(2) << DASCCU_stockCostResult << endl;
        SetConsoleTextAttribute(hstdout, 0x7);
    }
    
    void show_DASCCU_thread1(){
        DASCCU_currency = DASCCU_currency;
    }
    void show_DASCCU_thread2(){
        if (DASCCU_isPlus){ 
        SetConsoleTextAttribute(hstdout, 0xA);
        cout << "++";
        cout << std::fixed;
        cout << std::setprecision(4) << DASCCU_currency_extra;
        SetConsoleTextAttribute(hstdout, 0x7);
        cout << ":_DASCCU_: ";
        SetConsoleTextAttribute(hstdout, 0xA);
        cout << std::fixed;
        cout << std::setprecision(4) << DASCCU_currency << endl;
        SetConsoleTextAttribute(hstdout, 0x7);
        }
        else if(DASCCU_isMinus){
        SetConsoleTextAttribute(hstdout, 0xC);
        cout << "--";
        cout << std::fixed;
        cout << std::setprecision(4) << DASCCU_currency_extra;
        SetConsoleTextAttribute(hstdout, 0x7);
        cout << ":_DASCCU_: ";
        SetConsoleTextAttribute(hstdout, 0xC);
        cout << std::fixed;
        cout << std::setprecision(4) << DASCCU_currency << endl;
        SetConsoleTextAttribute(hstdout, 0x7);
        }
        setDASCCU_STOCKS();
    }
    
    string DASCCUName;
    void setDASCCU_Name(){
        DASCCUName = "_DASCCU_     ";
        
    }
    string getDASCCU_Name(){
        return DASCCUName;
    }
    void show_DASCCU_Name(){
        cout << getDASCCU_Name();
    }
    
    // KELIX
    void setCurrency_KELIX_extra_rand(){
        double a = 0.00;
        double b = 0.23;
        KELIX_currency_extra = ((b-a)*((double)rand()/RAND_MAX))+a;
    }
    void setTrend_KELIX_rand(){
        double a = 0.00;
        double b = 0.122;
        KELIX_TREND_VALUE = ((b-a)*((double)rand()/RAND_MAX))+a;
    }
    void KELIX_thread1()
    {
        while(1){
            int randomize_LAW;
            randomize_LAW = rand() % 50 + 1;
            
            if (randomize_LAW > 25){
                KELIX_currency += KELIX_TREND_VALUE;
                sleep(KELIX_TREND_VALUE);
            }
            if (randomize_LAW < 25){
                KELIX_currency -= KELIX_TREND_VALUE;
                sleep(KELIX_TREND_VALUE);
            }
        }
    }   
    void KELIX_thread2(){
        while(1){
        KELIX_statistics = rand() % 10200 + 1;
        if (KELIX_statistics < 4999){
            KELIX_isPlus = false;
            KELIX_isMinus = true;
            setCurrency_DASCCU_extra_rand();
            KELIX_currency -= KELIX_currency_extra;
            KELIX_Stocks -= KELIX_currency_extra * 100;
            
        }
        else if(KELIX_statistics > 4999){
            KELIX_isMinus = false;
            KELIX_isPlus = true;
            setCurrency_KELIX_extra_rand();
            KELIX_currency += KELIX_currency_extra;
            KELIX_Stocks += KELIX_currency_extra * 100;
        }
        sleep(2);
        }
    }
    void setKELIX_STOCKS(){
        cout << "STOCK-COST: $";
        KELIX_stockCostResult = KELIX_stockPrice * KELIX_currency / 2;
        SetConsoleTextAttribute(hstdout, 0xA);
        cout << std::fixed;
        cout << std::setprecision(2) << KELIX_stockCostResult << endl;
        SetConsoleTextAttribute(hstdout, 0x7);
    }
    

    void show_KELIX_thread1(){
        KELIX_currency = KELIX_currency;
    }
    void show_KELIX_thread2(){
        if (KELIX_isPlus){ 
        SetConsoleTextAttribute(hstdout, 0xA);
        cout << "++";
        cout << std::fixed;
        cout << std::setprecision(4) << KELIX_currency_extra;
        SetConsoleTextAttribute(hstdout, 0x7);
        cout << ":_KELIX_: ";
        SetConsoleTextAttribute(hstdout, 0xA);
        cout << std::fixed;
        cout << std::setprecision(4) << KELIX_currency << endl;
        SetConsoleTextAttribute(hstdout, 0x7);
        }
        else if(KELIX_isMinus){
        SetConsoleTextAttribute(hstdout, 0xC);
        cout << "--";
        cout << std::fixed;
        cout << std::setprecision(4) << KELIX_currency_extra;
        SetConsoleTextAttribute(hstdout, 0x7);
        cout << ":_KELIX_: ";
        SetConsoleTextAttribute(hstdout, 0xC);
        cout << std::fixed;
        cout << std::setprecision(4) << KELIX_currency << endl;
        SetConsoleTextAttribute(hstdout, 0x7);
        }
        setKELIX_STOCKS();
    }
     
    string KELIXName;
    void setKELIX_Name(){
        KELIXName = "_KELIX_      ";
    }
    string getKELIX_Name(){
        return KELIXName;
    }
    void show_KELIX_Name(){
        cout << getKELIX_Name();
    }
    
    
   
    
    std::_Put_time<char> gt(){
        using std::chrono::system_clock;
        std::time_t tt = system_clock::to_time_t (system_clock::now());
        struct std::tm * ptm = std::localtime(&tt);
        return std::put_time(ptm,"%c");
    }
    void printTime(){
        SetConsoleTextAttribute(hstdout, 0x8);
        std::cout << gt() << endl;
    }
    
    void set_DASCCU_TOTAL(){
        DASCCU_stockCostResult = DASCCU_stockPrice * DASCCU_currency / 2;
        DASCCU_total_stock_price += DASCCU_stockCostResult;
    }
    void show_DASCCU_TOTAL(){
        cout << std::fixed;
        cout << std::setprecision(2) << "$" << DASCCU_total_stock_price << endl;
    }
    void set_KELIX_TOTAL(){
        KELIX_stockCostResult = KELIX_stockPrice * KELIX_currency / 2;
        KELIX_total_stock_price += KELIX_stockCostResult;
    }
    void show_KELIX_TOTAL(){
        cout << std::fixed;
        cout << std::setprecision(2) << "$" << KELIX_total_stock_price << endl;
    }
    
    void buyDASCCU_Stock(){
       DASCCU_stockCostResult = DASCCU_stockPrice * DASCCU_currency / 2;
       if(DASCCU_stockCostResult > 0.00){
            if (money->credit_value >= DASCCU_stockCostResult){
            money->credit_value -= DASCCU_stockCostResult;
            store_DASCCU_Price = DASCCU_stockCostResult;
            number_of_DASCCU++;
            set_DASCCU_TOTAL();
            cout << "You have bought 1 DASCCU stock for: $";
            SetConsoleTextAttribute(hstdout,0xA); cout << DASCCU_stockCostResult << endl;
            SetConsoleTextAttribute(hstdout,0x7);
            }
       }
       else if(DASCCU_stockCostResult < 0.00){
            cout << "The Stock is BUST, you cannot buy while the stock is BUST" << endl;
       }
       cout << "Credit left: ";
       SetConsoleTextAttribute(hstdout, 0xA);
       money->get_creditValue();
       SetConsoleTextAttribute(hstdout, 0x7);
    }
    void sellDASCCU_Stock(){
        DASCCU_stockCostResult = DASCCU_stockPrice * DASCCU_currency / 2;
        if (number_of_DASCCU > 0){
        number_of_DASCCU--;
        money->credit_value += DASCCU_stockCostResult;
        cout << "DASCCU Stock Sold for: $";
        SetConsoleTextAttribute(hstdout,0xA); cout << DASCCU_stockCostResult << endl;
        SetConsoleTextAttribute(hstdout,0x7);
        }
    }
    
    void buyKELIX_Stock(){
       KELIX_stockCostResult = KELIX_stockPrice * KELIX_currency / 2;
       if(KELIX_stockCostResult > 0.00){
            if (money->credit_value >= KELIX_stockCostResult){
            money->credit_value -= KELIX_stockCostResult;
            store_KELIX_Price = KELIX_stockCostResult;
            number_of_KELIX++;
            set_KELIX_TOTAL();
            cout << "You have bought 1 KELIX stock for: $";
            SetConsoleTextAttribute(hstdout,0xA);cout << KELIX_stockCostResult << endl;
            SetConsoleTextAttribute(hstdout,0x7);
            }
       }
       else if(KELIX_stockCostResult < 0.00){
            cout << "The Stock is BUST, you cannot buy while the stock is BUST" << endl;
       }
       cout << "Credit left: ";
       SetConsoleTextAttribute(hstdout, 0xA);
       money->get_creditValue();
       SetConsoleTextAttribute(hstdout, 0x7);
    }
    void sellKELIX_Stock(){
        KELIX_stockCostResult = KELIX_stockPrice * KELIX_currency / 2;
        if (number_of_KELIX > 0){
        number_of_KELIX--;
        money->credit_value += KELIX_stockCostResult;
        cout << "KELIX Stock Sold for: $";
        SetConsoleTextAttribute(hstdout,0xA); cout << KELIX_stockCostResult << endl;
        SetConsoleTextAttribute(hstdout,0x7);
        }
    }
    
    
     void View_Portfolio(){
        cout << "#################################";SetConsoleTextAttribute(hstdout, 0xE);cout << "StockPorfolio";SetConsoleTextAttribute(hstdout, 0x7);cout <<"##################################" << endl;
        cout << "Stock:        #Number of shares:     Last:       Total:" << endl;
        show_DASCCU_Name();cout << " "; cout << number_of_DASCCU << "                      $";SetConsoleTextAttribute(hstdout, 0xA);cout << std::fixed;
        cout << std::setprecision(2) << store_DASCCU_Price;SetConsoleTextAttribute(hstdout, 0x7);cout << "       ";show_DASCCU_TOTAL();
        
        show_KELIX_Name();cout << " "; cout << number_of_KELIX << "                      $";SetConsoleTextAttribute(hstdout, 0xA);cout << std::fixed;
        cout << std::setprecision(2) << store_KELIX_Price;SetConsoleTextAttribute(hstdout, 0x7);cout << "       ";show_KELIX_TOTAL();

    }
    unsigned int iterate_stock = 1;
    string stock_names[] = {"DEFAULT","DASCCU","KELIX"};
    void CYCLE_STOCK_NAMES_UP(){
        iterate_stock += 1;
        if (iterate_stock >= 3){
            iterate_stock = 1;
        }
        if (iterate_stock == 1){
            cout << stock_names[iterate_stock] << endl;
        }
        if (iterate_stock == 2){
            cout << stock_names[iterate_stock] << endl;
        }
    }
    void CYCLE_STOCK_NAMES_DOWN(){
        iterate_stock -= 1;
        if (iterate_stock <= 0){
            iterate_stock = 2;
        }
        if (iterate_stock == 1){
            cout << stock_names[iterate_stock] << endl;
        }
        if (iterate_stock == 2){
            cout << stock_names[iterate_stock] << endl;
        }
    }

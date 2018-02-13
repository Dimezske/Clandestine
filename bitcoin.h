#pragma once
using namespace std;

class Bitcoin{
private:
    
public:
    double bits;
    void commenceBitcoin(){
        showBits();
        usleep(10000);
        getBits();
        usleep(300000);
    }
    void showBits(){
        SetConsoleTextAttribute(hstdout, 0x4);
        std::cout << std::fixed;
        std::cout << std::setprecision(8) << "B: " << bits << "satos/kbits" <<endl;
        SetConsoleTextAttribute(hstdout, 0x80);
    }
    void getBits(){
        bits += 0.00000014 * 0.00000014 * 8 / 0.00000014;
    }
    void sellBits(){
        double bitsprice = 0.14;
        cout << "bits sold: " << bits << endl;
            money->credit_value += bitsprice / 8 * 14 * 14 * bits * 2000000;
            bits = 0.00000000;
    }
    Bitcoin() : bits(0.00000000){
        
    }
};
Bitcoin *bitcoin = new Bitcoin;

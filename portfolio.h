#pragma once
using namespace std;

class Portfolio {
protected:
    
    string houseStatus;
public:
    unsigned int numberOfHouses = 0;
    unsigned int viewNumberOfHouses(){
        return numberOfHouses;
    }
    string statusOfHouse(){
        return houseStatus;
    }
};
Portfolio *portfolio = new Portfolio;

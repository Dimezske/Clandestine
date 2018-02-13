#pragma once
using namespace std;

/*
 * Health
 * Heart Rate
 * Adrenaline
 * Anxiety
 * Depression
 * 
 * Name
 * Experiance
 * Weight
 * Height
 * Sex
 * Age
 * 
 * Suppliments
 * Sickness
 * 
 * Armor
 * 
 * 
 * // CONNECTION
 * create new player on startup
 * */



class Player{
private:
public:
    string Name;
    string getName(){
        return Name;
    }
    void setName(){
        getline(cin,Name);
        
    }
    Player(int Health){
        
    }
};
Player *player = new Player(100);

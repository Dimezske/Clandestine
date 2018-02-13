#pragma once
#include "banking.h"
using namespace std;
 
    int heatLevelCounter;
    int rand_probablity;
    int rand_sleep;
    
    double stolen_money;
    int stolen_money_rand;
    void heatLevel(){
        
    } 
    void playSirens(){
        Beep(750,1000);      
        Beep(550,1000);
        Beep(750,1000);      
        Beep(550,1000);
        Beep(750,1000);      
        Beep(550,1000);
        Beep(750,1000);      
        Beep(550,1000);
        Beep(750,1000);      
        Beep(550,1000);
        Beep(750,1000);      
        Beep(550,1000);
    }
    void rand_sleep2(){
        rand_sleep = rand() % 120 + 1;
        if(rand_sleep > 40){
            sleep(rand_sleep);
        }
    }
    void Cops_PassBy_thread(){
        while(1){
        rand_sleep2();
        playSirens();
        }
    }
    void Cops_Call_thread(){
        playSirens();
        cout << "Cops!" << endl;
    }
     void Cops_Arrest(){
        playSirens();
        cout << "Freeze!" << endl;
        money->cash_value -= stolen_money;
        cout << "You are Under Arrest, anything you say or do will be used agaisnt you in court" << endl;
        cout << "-The Police took: $";cout << stolen_money; cout << "\nAs evidence to you agaisnt you in court" << endl;
    }
    void copsCall(){
        int copscall;
        copscall = rand() % 60 + 1;
        if (copscall > 15){
           Cops_Call_thread();
        }
        if (copscall > 47){
            Cops_Arrest();
        }
    }
    
    
 
 // - NOTE 
 /* Make cops counter for money give back
  * make jail       
  * 
  *
  * */

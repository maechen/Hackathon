#include <iostream>
#include "farm.hpp"


using namespace std;

Farm::Farm(){
    shovel = true;
    hammer = true;
    leave = false;
}

bool Farm::setLeave(bool stat){
    leave = stat;
}
bool Farm::getLeave(){
    return leave;
}
bool Farm::getHammer(){
    return hammer;
}
bool Farm::getShovel(){
    return shovel;
}
void Farm::setHammer(bool stat){
    hammer = stat;
}
void Farm::setShovel(bool stat){
    shovel = stat;
}
void Farm::displayFarm(){
    cout << "___FARM___" << endl;
}
void Farm::farmMenu(string Char_name){

    cout << "👩🏼‍🌾🪓 - 'GET OFF MA FARM! QUIT TRYNA STEAL MA TOOLS!!!'" << endl;
    int farmChoice;
    cout << "_____MENU____" << endl;
    cout << "1. 🔨 collect hammer" << endl;
    cout << "2. 🧹 collect shovel" << endl;
    cout << "3. Leave farm" << endl;
    cin >> farmChoice;

    if(farmChoice == 1){
        int choice;
        setHammer(false);
        cout << "👩🏼‍🌾🪓 - 'I WARNED YA'" << endl;
        cout << "___MENU___" << endl;
        cout << "1. Escape " << endl;
        cout << "2. Fight farmer" << endl;
        cin >> choice;

        if(choice == 2){
            system("clear");
            cout << "Unfortunately the farmer is stronger. You Died." << endl;
            cout << "R.I.P." << Char_name << "🪦" << endl;
            exit(1);
        }else{
            return;
        }
    }else if(farmChoice == 2){
        int choice;
        setShovel(false);
        cout << "👩🏼‍🌾🪓 - 'I WARNED YA'" << endl;
        cout << "___MENU___" << endl;
        cout << "1. Escape " << endl;
        cout << "2. Fight farmer" << endl;
        cin >> choice;

        if(choice == 2){
            system("clear");
            cout << "Unfortunately the farmer is stronger. You Died." << endl;
            cout << "R.I.P." << Char_name << "🪦" << endl;
            exit(1);
        }else{
            return;
        }
    }
    else{
        return;
    }
    return;
    }

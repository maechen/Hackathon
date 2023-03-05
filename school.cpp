#include <iostream>
#include "school.hpp"

using namespace std;
School::School(){
    sled = true;
    ladder = true;
}
bool School::getSled(){
    return sled;
}
void School::setSled(bool stat){
    sled = stat;
}
bool School::getLadder(){
    return ladder;
}
void School::setLadder(bool stat){
    ladder = stat;
}
void School::displaySchool(){
//fix this
 cout << "school display" << endl;
}
void School::schoolMenu(){
    string cont;
    cout << "👩🏽‍🦰 - 'Welcome to the school/library! '" << endl;
    cout << "' What can I help you with today? '" << endl;
    int schoolChoice;
    cout << "____MENU____" << endl;
    cout << "1. 🛷 Collect sled" << endl;
    cout << "2. 🪜 Collect Ladder" << endl;
    cout << "3. Leave the School" << endl;
    cin >> schoolChoice;

    if(schoolChoice == 1){
        setSled(false);
        system("clear");
        cout << "** 🛷 sled has been added to inventory **" << endl;
        cout << "Press 'c' to continue" << endl;
        cin >> cont;
    }else if(schoolChoice == 2){
        setLadder(false);
        system("clear");
        cout << "** 🪜 ladder has been added to inventory **" << endl;
        cout << "Press 'c' to continue" << endl;
        cin >> cont;
    }else if(schoolChoice == 3){
        return;
    }else{
        cout << "👩🏽‍🦰 - 'That wasn't a choice, leave the school now'"<< endl;
        cout << "Enter 'c' to continue" << endl;
        cin >> cont;
        return;
    }
}
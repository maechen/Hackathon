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
 cout << "school display" << endl;
}
void School::storeMenu(){
cout << "👩🏽‍🦰 - 'Welcome to the school/library! '" << endl;
    cout << "' What can I help you with today? '" << endl;
    int churchChoice;
    cout << "____MENU____" << endl;
    cout << "1. 🛷 Collect sled" << endl;
    cout << "2. 🪜 Collect Ladder" << endl;
    cout << "3. Leave the School" << endl;
    if(churchChoice == 1){
        setSled(false);
    }else if(churchChoice == 2){
        setLadder(false);
    }else if(churchChoice == 3){
        return;
    }else{
        cout << "👩🏽‍🦰 - 'That wasn't a choice, leave the school now'"<< endl;
        return;
    }
}
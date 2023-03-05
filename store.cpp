#include <iostream>
#include "store.hpp"

using namespace std;
Store::Store(){
    explosive = true;
    saw = true;
}
bool Store::getSaw(){
    return saw;
}
void Store::setSaw(bool stat){
    saw = stat;
}
bool Store::getExplosive(){
    return explosive;
}
void Store::setExplosive(bool stat){
    explosive = stat;
}
void Store::displayStore(){
 //fix this
 cout << "store display" << endl;
}
void Store::storeMenu(){
    string cont;
    cout << "👵🏽- 'What can I do for ya sweetie? In these strange times, it doesnt hurt to have some good supplies'" << endl;
   
    int storeChoice;
    cout << "____MENU____" << endl;
    cout << "1. 🪚 Collect saw" << endl;
    cout << "2. 💣 Collect explosive" << endl;
    cout << "3. Leave the Store" << endl;
    cin >> storeChoice;

    if(storeChoice == 1){
        setSaw(false);
        system("clear");
        cout << "** 🪚 saw has been added to inventory **" << endl;
        cout << "Press 'c' to continue" << endl;
        cin >> cont;
    }else if(storeChoice == 2){
        setExplosive(false);
        system("clear");
        cout << "** 💣 explosive has been added to inventory **" << endl;
        cout << "Press 'c' to continue" << endl;
        cin >> cont;
    }else if(storeChoice == 3){
        return;
    }else{
        cout << "👵🏽 - 'That wasn't a choice, leave the store now'"<< endl;
        cout << "Enter 'c' to continue" << endl;
        cin >> cont;
        return;
    }
}
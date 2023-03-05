#include <iostream>
#include "store.hpp"
#include "auxilliary_functions.cpp"

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

cout <<" ____________________________________________ " << endl;
cout <<"|____________________________________________|" << endl;
cout <<"|__||  ||___||  |_|___|___|__|  ||___||  ||__|" << endl;
cout <<"||__|  |__|__|  |___|___|___||  |__|__|  |__||" << endl;
cout <<"|__||  ||___||  |_|___|___|__|  ||___||  ||__|" << endl;
cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||" << endl;
cout <<"|__||  ||___||  |    || |    |  ||___||  ||__|" << endl;
cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||" << endl;
cout <<"|__||  ||___||  |    || |    |  ||___||  ||__|" << endl;
cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||" << endl;
cout <<"|__||  ||___||  |   O|| |O   |  ||___||  ||__|" << endl;
cout <<"||__|  |__|__|  |    || |    |  |__|__|  |__||" << endl;
cout <<"|__||  ||___||  |    || |    |  ||___||  ||__|" << endl;
cout <<"||__|  |__|__|__|____||_|____|  |__|__|  |__||" << endl;
cout <<"|LLL|  |LLLLL|______________||  |LLLLL|  |LLL|" << endl;
cout <<"|LLL|  |LLL|______________|  |  |LLLLL|  |LLL|" << endl;
cout <<"|LLL|__|L|______________|____|__|LLLLL|__|LLL|" << endl;

}
void Store::storeMenu(){
    string cont;
    cout << "🧓 - 'What can I do for ya sweetie? In these strange times, it doesnt hurt to have some good supplies.'" << endl;
   
    int storeChoice;
    cout << "What Would You Like to do Now? " << endl;
    cout << "1. 🪚 Collect Saw" << endl;
    cout << "2. 💣 Collect Explosive" << endl;
    cout << "3. Leave the Store" << endl;
    cin >> storeChoice;

    if(storeChoice == 1){
        setSaw(false);
        system("clear");
        cout << YELLOW <<  "** 🪚 Saw has been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(storeChoice == 2){
        setExplosive(false);
        system("clear");
        cout << YELLOW << "** 💣 Explosive has been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(storeChoice == 3){
        return;
    }else{
        cout << "🧓 - 'That wasn't a choice, leave now!'"<< endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
        return;
    }
}
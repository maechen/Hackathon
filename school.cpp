#include <iostream>
#include "school.hpp"
#include "auxilliary_functions.cpp"

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
cout<< "    _____ "<< endl;
cout<< "    /    /|_ ___________________________________________"<< endl;
cout<< "   /    // /|                                          /|"<< endl;
cout<< "  (====|/ //                                _QP_      / |"<< endl;
cout<< "   (=====|/                                (  ' )    / .|"<< endl;
cout<< "  (====|/                                   \\__/    / /||"<< endl;
cout<< " /_________________________________________________/ / ||"<< endl;
cout<< " |  _____________________________________________  ||  ||"<< endl;
cout<< " | ||                                            | ||"<< endl;
cout<< " | ||                                            | ||"<< endl;
cout<< " | |                                             | | "<< endl;

}
void School::schoolMenu(){
    string cont;
    cout << " 👱‍♀️ - 'Welcome to the school/library! '" << endl;
    cout << " 👱‍♀️ -' What can I help you with today? '" << endl;
    int schoolChoice;
    cout << "What Would You Like to do Now? " << endl;
    cout << "1. 🛷 Collect Sled" << endl;
    cout << "2. 🪜 Collect Ladder" << endl;
    cout << "3. Leave the School" << endl;
    cin >> schoolChoice;

    if(schoolChoice == 1){
        setSled(false);
        system("clear");
        cout << YELLOW << "** 🛷 Sled has been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(schoolChoice == 2){
        setLadder(false);
        system("clear");
        cout << YELLOW << "** 🪜 Ladder has been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(schoolChoice == 3){
        return;
    }else{
        cout << "👱‍♀️ - 'That wasn't a choice, leave now!'"<< endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
        return;
    }
}
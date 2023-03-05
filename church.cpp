#include <iostream>
#include "church.hpp"
#include "auxilliary_functions.cpp"

using namespace std;

Church::Church(){
    candles = true;
    bricks = true;
}
bool Church::getCandles(){
    return candles;
}
bool Church::getBricks(){
    return bricks;
}
void Church::setCandles(bool stat){
    candles = stat;
}
void Church::setBricks(bool stat){
    bricks = stat;
}
void Church::displayChurch(){

cout << "            +" << endl;
cout << "           /_\\" << endl;
cout << " ,%%%______|O|" << endl;
cout <<"  %%%/_________\\" << endl;
cout <<" `%%| /\\[][][]|%" <<endl;
cout <<"___||_||______|%&,__" << endl;
cout <<""<<endl;
}
void Church::churchMenu(string Char_name){
    string cont;
    cout << "🧑 - 'Hello " << Char_name << " good to see you here. I know I have told you before but ..." << endl;
    cout << "... make sure to stay out of the forest. Bad spirits in there.'" << endl;

    int churchChoice;
    cout << "What Would You Like to do Now?" << endl;
    cout << "1. 🕯️ Collect Candle" << endl;
    cout << "2. 🧱 Collect Bricks" << endl;
    cout << "3. Leave the Church" << endl;
    cin >> churchChoice;
    
    if(churchChoice == 1){
        setCandles(false);
        system("clear");
        cout << YELLOW << "** 🕯️ Candle has been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(churchChoice == 2){
        setBricks(false);
        system("clear");
        cout << YELLOW << "** 🧱 Bricks have been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(churchChoice == 3){
        return;
    }else{
        cout << "🧑 - 'That wasn't a choice, leave now!'"<< endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
        return;
    }
}
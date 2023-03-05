#include <iostream>
#include "church.hpp"

using namespace std;

Church::Church(){
     bool candles = true;
     bool bricks = true;
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
    cout << "      ^     " << endl;
    cout << "|__CHURCH__|" << endl;
    cout << "|_🕯️__🧑🏾‍💼__🕯️_|" << endl;
    cout << "|-----------|" << endl;
    cout << "" << endl;
}
void Church::churchMenu(string Char_name){
    cout << "🧑🏾‍💼 - 'Hello " << Char_name << " good to see you here. I know I have told you before but ..." << endl;
    cout << "... make sure to stay out of the forest. Bad spirits in there.'" << endl;
    int churchChoice;
    cout << "____MENU____" << endl;
    cout << "1. 🕯️ Collect candle" << endl;
    cout << "2. 🧱 Collect bricks" << endl;
    cout << "3. Leave the church" << endl;
    if(churchChoice == 1){
        setCandles(false);
    }else if(churchChoice == 2){
        setBricks(false);
    }else if(churchChoice == 3){
        return;
    }else{
        cout << "🧑🏾‍💼 - 'That wasn't a choice, leave the church now'"<< endl;
        return;
    }
}
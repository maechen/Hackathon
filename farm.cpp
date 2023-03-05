#include <iostream>
#include <stdlib.h>
#include "farm.hpp"
#include "auxilliary_functions.cpp"


using namespace std;

Farm::Farm(){
    shovel = true;
    hammer = true;
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
cout << "                            +&-" << endl;
cout << "                          _.-^-._    .--." << endl;
cout << "                       .-'   _   '-. |__|" << endl;
cout << "                      /     |_|     \\  |" << endl;
cout << "                     /               \\ |" << endl;
cout << "                    /|     _____     |\\ |" << endl;
cout << "                     |    |==|==|    |  |" << endl;
cout << " |---|---|---|---|---|    |--|--|    |  |" << endl;
cout << " |---|---|---|---|---|    |==|==|    |  |" << endl;
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

}
void Farm::farmMenu(string Char_name){
    string cont;
    cout << "🤠🪓 - 'GET OFF MA FARM! QUIT TRYNA STEAL MA TOOLS!!!'" << endl;
    int farmChoice;
    cout << "What Would You Like to do Now?" << endl;
    cout << "1. 🔨 Collect Hammer" << endl;
    cout << "2. 🧹 Collect Shovel" << endl;
    cout << "3. Leave the Farm" << endl;
    cin >> farmChoice;

    if(farmChoice == 1){
        int choice;
        setHammer(false);
        system("clear");
        cout << YELLOW << "** 🔨Hammer added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
        system("clear");
        cout << "🤠🪓 - 'I WARNED YA'" << endl;
        cout << "What Would You Like to do Now?" << endl;
        cout << "1. Escape " << endl;
        cout << "2. Fight farmer" << endl;
        cin >> choice;

        if(choice == 2){
            system("clear");
            cout << RED << "Unfortunately the farmer is stronger. You Died." << endl;
            cout << "R.I.P. " << Char_name << " ⚰️🪦" << endl;
 cout << "               _______" << endl;
 cout << "         _____/      \\_____" << endl;
 cout << "        |                  ||" << endl;
 cout << "        |  _     ___   _   ||" << endl;
 cout << "        | | \\     |   |  \\ ||" << endl;
 cout << "        | |  |    |   |  | ||" << endl;
 cout << "        | |_/     |   |_/  ||" << endl;
 cout << "        | | \\     |   |    ||" << endl;
 cout << "        | |  \\    |   |    ||" << endl;
 cout << "        | |   \\. _|_. | .  ||" << endl;
 cout << "        |                  ||" << endl;
 cout << "        --------------------" << RESET << endl;
            exit(1);
        }else{
            return;
        }
    }else if(farmChoice == 2){
        int choice;
        setShovel(false);
        system("clear");
        cout << YELLOW << "** 🧹Shovel added to inventory **" << RESET << endl;
        cout << endl;
        cout << "🤠🪓 - 'I WARNED YA'" << endl;
        cout << "What Would You Like to do Now?" << endl;
        cout << "1. Escape " << endl;
        cout << "2. Fight farmer" << endl;
        cin >> choice;

        if(choice == 2){
            system("clear");
            cout << RED << "Unfortunately the farmer is stronger. You Died." << endl;
            cout << "R.I.P. " << Char_name << " ⚰️🪦" << endl;
 cout << "               _______" << endl;
 cout << "         _____/      \\_____" << endl;
 cout << "        |                  ||" << endl;
 cout << "        |  _     ___   _   ||" << endl;
 cout << "        | | \\     |   |  \\ ||" << endl;
 cout << "        | |  |    |   |  | ||" << endl;
 cout << "        | |_/     |   |_/  ||" << endl;
 cout << "        | | \\     |   |    ||" << endl;
 cout << "        | |  \\    |   |    ||" << endl;
 cout << "        | |   \\. _|_. | .  ||" << endl;
 cout << "        |                  ||" << endl;
 cout << "        --------------------" << RESET << endl;


            exit(1);
        }else{
            return;
        }
    }
    else if(farmChoice == 3){
        return;
    }
    else{
        cout << "🤠🪓 - 'That wasn't a choice, leave now!'"<< endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }
    return;
    }

#include <iostream>
#include "bank.hpp"
#include "auxilliary_functions.cpp"

using namespace std;

Bank::Bank(){
    key = true;
    gold = true;
}

bool Bank::getKey(){
    return key;
}
void Bank::setKey(bool stat){
    key = stat;
}
bool Bank::getGold(){
    return gold;
}
void Bank::setGold(bool stat){
    gold = stat;
}
void Bank::displayBank(){

cout << GREEN << "___________________________________" <<endl;
cout << "|#######====================#######|" <<endl;
cout << "|#(1)*UNITED STATES OF AMERICA*(1)#|" <<endl;
cout << "|#**          /===\\   ********  **#|" <<endl;
cout << "|** {G}      | (-) |             **|" <<endl;
cout << "|#*  ******  | /v\\ |    O N E    *#|"<<endl;
cout << "|#(1)         \\===/            (1)#|"<<endl;
cout << "|##=========ONE DOLLAR===========##|"<<endl;
cout << "------------------------------------"<< RESET << endl;

}

void Bank::printBankMenu(bool shovelStat, bool explosiveStat, string Char_name){
    string cont;
    int userChoice;
    cout << "👨🏻 - 'Welcome to the Bank. I am the teller here. Lately things have seemed weird about the vault." << endl;
    cout << "What Would You Like to do Now?" << endl;
    cout << "1. 🔑 Collect Key" << endl;
    cout << "2. 🧽 Collect Gold Brick" << endl;
    cout << "3. Enter the Vault" << endl;
    cout << "4. Leave the Bank" << endl;
    cin>> userChoice;

    if(userChoice == 1){
        setKey(false);
        system("clear");
        cout << YELLOW << "** 🔑 Key has been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(userChoice == 2){
        setGold(false);
        system("clear");
        cout << YELLOW << "** 🧽 Gold Brick has been added to inventory **" << RESET << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
    }else if(userChoice == 3){
        system("clear");
        if(getKey() == false){
            int vaultChoice;
            cout << "|__VAULT___|" << endl;
            cout << "|____🔐____|" << endl;
            cout << "|----------|" << endl;
            cout << "What Would You Like to do Now?"<< endl;
            cout << "1. Dig out of vault" << endl;
            cout << "2. Use explosive to leave vault" << endl;
            cout << "3. Leave vault and bank" << endl;
            cin >> vaultChoice;

            if(vaultChoice == 1){
                if(shovelStat == false){
                    system("clear");
                    cout << CYAN << "You begin to shovel under the vault ground." << endl;
                    cout << "Eventually you discover an empty room underneath." << endl;
                    cout << "You hop on down and explore the room until you come to a barrier." << endl;
                    cout << "You break out of the barrier with the shovel." << endl;
                    cout << "Turning around ... you see giant words 'SILVER HOLLOW'" << endl;
                    cout << "They are at the base of a snowglobe containing your town." << endl;
                    cout << "You turn again, to be faced with a sea of snowglobes lining shelves" << endl;
                    cout << "each with their own little town name." << endl;
                    cout << "END" << endl;
                    cout<<"        ____" << endl;
                    cout<<"     .-  +'   -. " << endl;   
                    cout<<"    /.'.'A_'*`.\\  " << endl;
                    cout<<"   |:.*'/\\-\\. ':|   " << endl;
                    cout<<"   |:.'.|| |.'*:|  " << endl;
                    cout<<"    \\:~^~^~^~^:/   " << endl;
                    cout<<"     /`-....-'\\       " << endl;  
                    cout<<"   /          \\   " << endl;       
                    cout<<"    `-.,____,.-'    " << RESET << endl; 
                    exit(1);
                }else{
                    cout << "You don't have a shovel you cannot dig out." << endl;
                    cout << BLACK << "Press 'c' to continue" << RESET << endl;
                    cin >> cont;
                }
            }else if(vaultChoice == 2){
                if(explosiveStat == false){
                    system("clear");
                    cout << RED << "Unfortunately, blowing up the vault while inside results in your death." << endl;
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
                    cout << "        --------------------" << endl;
                    cout << "I guess you will never know what you did all of this for..." << RESET << endl;
                    exit(1);
                }else{
                    cout << RED << "You don't have an explosive you cannot do this." << RESET << endl;
                    cout << BLACK << "Press 'c' to continue" << RESET << endl;
                    cin >> cont;
                }
            }else if(vaultChoice == 3){
                return;
            }

        }else{
            cout << RED << "You cannot enter the vault, you don't have a key. Now leaving Bank." << RESET << endl;
            cout << BLACK << "Press 'c' to continue" << RESET << endl;
            cin >> cont;
            return;
        }
    }else if(userChoice == 4){
        return;
    }else{
        cout << "👨🏻 - 'You didn't choose a valid option. Leave now!" << endl;
        cout << BLACK << "Press 'c' to continue" << RESET << endl;
        cin >> cont;
        return;
    }
}


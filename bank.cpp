#include <iostream>
#include "bank.hpp"

using namespace std;

Bank::Bank(){
    key = true;
    gold = true;
    leave = false;
}
bool Bank::getLeave(){
    return leave;
}
bool Bank::setLeave(bool stat){
    leave = stat;
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
    cout << "|___BANK___|" << endl;
    cout << "|👨🏻‍💼__💰💰💰__|" << endl;
    cout << "|----------|" << endl;
    cout << "" << endl;
}
void Bank::printBankMenu(bool shovelStat, bool explosiveStat, string Char_name){
    int userChoice;
    cout << "👨🏻‍💼- 'Welcome to the Bank. I am the teller here. Lately things have seemed weird about the vault." << endl;
    cout << "______MENU______" << endl;
    cout << "1. 🔑 Collect Key" << endl;
    cout << "2. 🧽 Collect Gold brick" << endl;
    cout << "3. Enter the vault" << endl;
    cout << "4. Leave bank" << endl;
    cin>> userChoice;

    if(userChoice == 1){
        setKey(false);
    }else if(userChoice == 2){
        setGold(false);
    }else if(userChoice == 3){
        if(getKey() == false){
            int vaultChoice;
            cout << "|__VAULT___|" << endl;
            cout << "|____🔐____|" << endl;
            cout << "|----------|" << endl;
            cout << "___MENU___"<< endl;
            cout << "1. Dig out of vault" << endl;
            cout << "2. Use explosive to leave vault." << endl;
            cout << "3. Leave vault and bank." << endl;
            cin >> vaultChoice;

            do{
            if(vaultChoice == 1){
                if(shovelStat == false){
                    cout << "You begin to shovel under the vault ground." << endl;
                    cout << "Eventually everything begins more hollowed out." << endl;
                    cout << "You walk across ground until you come to a barrier." << endl;
                    cout << "You break out of the barrier with the shovel." << endl;
                    cout << "Turning around ... you see giant words 'SILVER HOLLOW'" << endl;
                    cout << "They are at the base of a snowglobe containing your town." << endl;
                    cout << "You turn again, to be faced with a sea of snowglobes lining shelves" << endl;
                    cout << "each with their own little town name." << endl;
                    cout << "END" << endl;
                    setLeave(true);
                }else{
                    cout << "You don't have a shovel you cannot dig out." << endl;
                }
            }else if(vaultChoice == 2){
                if(explosiveStat == false){
                    cout << "Unfortunately, blowing up the vault while inside results in your death." << endl;
                    cout << "R.I.P." << Char_name << "⚰️🪦" << endl;
                    return;
                }else{
                    cout << "You don't have an explosive you cannot do this." << endl;
                }
            }else if(vaultChoice == 3){
                setLeave(true);
            }
            }while(vaultChoice >=1 && vaultChoice <=3);

        }else{
            cout << "You cannot enter the vault, you dont have a key. Leave Bank" << endl;
          setLeave(true);
        }
    }else if(userChoice == 4){
        setLeave(true);
    }else{
        cout << "👨🏻‍💼- 'You didn't choose a valid option. Leave Bank" << endl;
        setLeave(true);
    }
}


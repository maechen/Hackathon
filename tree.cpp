#include <iostream>
#include "tree.hpp"

using namespace std;

Tree::Tree(){
    pass = false;
}

bool Tree::getPass(){
    return pass;
}
bool Tree::setPass(bool stat){
    pass = stat;
}

void Tree::displayTreeMenu(bool candleStat, bool sawStat, bool explodeStat, bool ladderStat, bool brickStat, bool goldStat, bool hammerStat, string Char_name){
    cout << "You have reached the trees." << endl;
    int treeChoice;
    cout << "____TREE MENU____" << endl;
    cout << "1.Pass trees" << endl;
    cout << "2.Go back to village" << endl;
    cin >> treeChoice;
    if(treeChoice == 1){
        while(getPass() == false){

        int choice;
        cout << "___MENU___" << endl;
        cout << "1. Burn trees" << endl;
        cout << "2. Climb trees" << endl;
        cout << "3. Saw trees" << endl;
        cout << "4. Explode trees" << endl;
        cin >> choice;
        if(choice == 1){
            if(candleStat == false){
                setPass(true);
            }else{
                cout << "find proper tools for this operation." << endl;
                return;
            }
        }else if(choice == 2){
            if(ladderStat == false){
                setPass(true);
            }else{
                cout << "find proper tools for this operation." << endl;
                return;
            }
        }else if(choice == 3){
            if(sawStat == false){
                setPass(true);
            }else{
                cout << "find proper tools for this operation." << endl;
                return;
            }

        }else if(choice == 4){
            if(explodeStat == false){
                setPass(true);
            }else{
                cout << "find proper tools for this operation." << endl;
                return;
            }
        }
        cout << "invalid choice" << endl;
        return;
    }
    //if true sequence 
    cout << "You have reached a wall." << endl;
    cout << "It is foggy looking and stretches as far up as you can see" << endl;
    cout << "You bang on the wall with your hand, it is glass" << endl;
    int wallChoice;
    cout << "How would you like to continue?" << endl;
    cout << "1. Break the wall" << endl;
    cout << "2. Leave" << endl;
    cin >> wallChoice;
    if(wallChoice == 1){
        int choice;
        cout << "How will you break the wall?" << endl;
        cout << "1. Break with brick" << endl;
        cout << "2. Break with hammer" << endl;
        cin >> choice;
        if(choice == 1){
            if(brickStat == false || goldStat == false){
                 system("clear");
                    cout << "You begin to shovel under the vault ground." << endl;
                    cout << "Eventually everything begins more hollowed out." << endl;
                    cout << "You walk across ground until you come to a barrier." << endl;
                    cout << "You break out of the barrier with the shovel." << endl;
                    cout << "Turning around ... you see giant words 'SILVER HOLLOW'" << endl;
                    cout << "They are at the base of a snowglobe containing your town." << endl;
                    cout << "You turn again, to be faced with a sea of snowglobes lining shelves" << endl;
                    cout << "each with their own little town name." << endl;
                    cout << "END" << endl;
                    exit(1);
            }
        }else if(choice == 2){
            if(hammerStat == false){
                 system("clear");
                    cout << "You begin to shovel under the vault ground." << endl;
                    cout << "Eventually everything begins more hollowed out." << endl;
                    cout << "You walk across ground until you come to a barrier." << endl;
                    cout << "You break out of the barrier with the shovel." << endl;
                    cout << "Turning around ... you see giant words 'SILVER HOLLOW'" << endl;
                    cout << "They are at the base of a snowglobe containing your town." << endl;
                    cout << "You turn again, to be faced with a sea of snowglobes lining shelves" << endl;
                    cout << "each with their own little town name." << endl;
                    cout << "END" << endl;
                    exit(1);
            }
        }
        system("clear");
        cout << "The town does not like what you have done to the forest." << endl;
        cout << "They have become hostile, and killed you for this. " << endl;
        cout << "R.I.P." << Char_name << "⚰️🪦" << endl;
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
                            exit(1);
    }else{
        system("clear");
        cout << "The town does not like what you have done to the forest." << endl;
        cout << "They have become hostile, and killed you for this. " << endl;
                   cout << "R.I.P." << Char_name << "⚰️🪦" << endl;
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
                    exit(1);
    }
}else if(treeChoice == 2){
    return;
}
}
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


void Tree::displayTreeMenu(bool candleStat, bool sawStat, bool explodeStat, bool ladderStat, string name){
    int treeChoice;
    string cont;
    
    cout << "You have reached the trees." << endl;
    cout << "What Would You Like to do Now?" << endl;
    cout << "1. Pass trees" << endl;
    cout << "2. Go back to village" << endl;

    cin >> treeChoice;
    system("clear");
    if(treeChoice == 1){
        if(candleStat && sawStat && explodeStat && ladderStat){
            cout << "You do not have any tools to pass the trees. " << endl;
            cout << "Press 'c' to continue" << endl;
            cin >> cont;
            return;
        }

        int passChoice;

        cout << "What Would You Like to do Now? " << endl;
        cout << "1. Burn trees" << endl;
        cout << "2. Climb trees" << endl;
        cout << "3. Saw trees" << endl;
        cout << "4. Explode trees" << endl;

        cin >> passChoice;
        system("clear");
        if(passChoice == 1){
            if(!candleStat){
                setPass(true);
            }
            else{
                cout << "You don't have the tools for this yet." << endl;
                cout << "Press 'c' to continue" << endl;
                cin >> cont;
                return;
            }
        }
        else if(passChoice == 2){
            if(!ladderStat){
                setPass(true);
            }
            else{
                cout << "You don't have the tools for this yet." << endl;
                cout << "Press 'c' to continue" << endl;
                cin >> cont;
            }
        }
        else if(passChoice == 3){
            if(!sawStat){
                setPass(true);
            }
            else{
                cout << "You don't have the tools for this yet." << endl;
                cout << "Press 'c' to continue" << endl;
                cin >> cont;
            }
        }
        else if(passChoice == 4){
            if(!explodeStat){
                system("clear");
                cout << "You blew yourself up in the process." << endl;
                cout << "R.I.P. " << name <<" ⚰️🪦" << endl;
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
                cout << "I guess you will never know what you did all of thsi for..." << endl;
                exit(1);
            }
            else{
                cout << "You don't have the tools for this yet." << endl;
                cout << "Press 'c' to continue" << endl;
                cin >> cont;
            }
        }
    }
    else{
        return;
    }
    return;
}

void Tree::displayPassed(bool brickStat, bool hammerStat, bool goldStat, string name){
    int wallChoice;
    string cont;

    if(pass){
        system("clear");
        cout << "You have reached a wall." << endl;
        cout << "It is foggy looking and stretches as far up as you can see." << endl;
        cout << "You bang on the wall with your hand, it is glass." << endl;
        cout << "Press 'c' to continue" << endl;
        cin >> cont;
        system("clear");
        cout << "What Would You Like to do Now?" << endl;
        cout << "1. Break the wall" << endl;
        cout << "2. Return home" << endl;
        cin >> wallChoice;
        system("clear");
        if(wallChoice == 1){
            if(brickStat && hammerStat && goldStat){
                cout << "You don't have any tools to break the glass!" << endl;
                cout << "The villagers were angry that they found you tresspassing." << endl;
                cout << "In a mob, they killed you for trying to leave." << endl;
                cout << "R.I.P. " << name <<" ⚰️🪦" << endl;
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
                cout <<" I guess you will never know whats on the other side..." << endl;
                exit(1);
            }
            if(!brickStat || !hammerStat || !goldStat){
                cout << "You broke the glass!" << endl;
                cout << "Now that you can finally see passed the foggy glass, your heart drops." << endl;
                cout << "Outside is an endless collection of huge snowglobes." << endl;
                cout << "As you step outside of the glass and turn around ..." << endl;
                cout << "You see giant words 'SILVER HOLLOW'" << endl;
                cout << "They are at the base of a snowglobe containing your town." << endl;
                cout << "END" << endl;
                cout<<"       ____" << endl;
                cout<<"    .-  +'   -. " << endl;   
                cout<<"    /.'.'A_'*`.\\  " << endl;
                cout<<"   |:.*'/\\-\\. ':|   " << endl;
                cout<<"   |:.'.|| |.'*:|  " << endl;
                cout<<"    \\:~^~^~^~^:/   " << endl;
                cout<<"     /`-....-'\\       " << endl;  
                cout<<"   /           \\   " << endl;       
                cout<<"    `-.,____,.-'    " << endl; 
                exit(1);
            }

        }
        if(wallChoice == 2){
                cout << "The villagers were angry that they found you tresspassing." << endl; 
                cout << "In a mob, they killed you for trying to leave." << endl;
                cout << "R.I.P. " << name <<" ⚰️🪦" << endl;
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
                cout <<" I guess you will never know whats on the other side..." << endl;
                exit(1);
        }
        else{
            cout << "Invalid Input." << endl;
            cout << "Press 'c' to continue" << endl;
            cin >> cont;
            return;
        }  
    }
}
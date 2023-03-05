#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "auxilliary_functions.cpp"

using namespace std;

int main(){
    system("clear");

    cout << "Backstory" << endl;
    string name;
    cin >> name;
    // assign name to character object
    cout << "directions" << endl;
    // create map object
    // call add npc function
    //create class for each place
    
    while(true){
        // call display map
        if( pos == bank){
            // print bank room
            // call teller's words
            // call bank menu
            if(inside vault){
                // call function that displays menue to escape thru bottom
            }
        }
        else if(pos == school){
            // print library room
            //call teacher words
            //call school menu
        }
        else if(pos == church){
            // print church room
            //call preist words
            //call church menu
        }
        else if(pos == store){
            //print store display
            //print store words
            //print store menu
        }
        else if( pos == farm){
            // print farm room
            // call farm menu
        }
        else if(pos == tree){
            // call character function that checks inventory and prints menues based on that
            if( tree is broken thru){
            // call tree function that displays menues to break glass, checks inventory
            }
            
        }
        
        // moving mechanics
        char keyChar;
        cin >> keyChar;
        m.move(keyChar);
        system("clear");
    }
    
}
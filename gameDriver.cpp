#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "auxilliary_functions.cpp"
#include "map.hpp"
#include "farm.hpp"
#include "bank.hpp"
#include "church.hpp"

using namespace std;

int main(){
    system("clear");

    
    cout << "Backstory" << endl;
    string name;
    cin >> name;
    // assign name to character object
    cout << "directions" << endl;
    Map m;
    //Bank b;
    Farm f;
    Church c;
    //Store s;
    //School sc;

    m.addRoom(1,1); // FARM
    m.addRoom(2,1); // STORE
    m.addRoom(3,1); // BASE
    m.addRoom(1,4); // SCHOOL
    m.addRoom(2,4); // CHURCH
    m.addRoom(3,4); // BANK
    m.addTree(0,0);
    m.addTree(0,1);
    m.addTree(0,2);
    m.addTree(0,3);
    m.addTree(0,4);
    m.addTree(0,5);
    m.addTree(1,0);
    m.addTree(2,0);
    m.addTree(3,0);
    m.addTree(4,0);
    m.addTree(4,1);
    m.addTree(4,2);
    m.addTree(4,3);
    m.addTree(4,4);
    m.addTree(4,5);
    m.addTree(1,5);
    m.addTree(2,5);
    m.addTree(3,5);

    
    //create class for each place
    bool leave = false;
    

    while(true){
        m.displayMap();
        
        if(m.getPlayerRow() == 3 && m.getPlayerCol() == 4){ // BANK
           //b.displayBank();
           //b.printBankMenu(f.getShovel(), s.getExplosive(), name);
        }
        else if(m.getPlayerRow() == 1 && m.getPlayerCol() == 4){ // SCHOOL
            // print library room
            //call teacher words
            //call school menu
        }
        else if(m.getPlayerRow() == 2 && m.getPlayerCol() == 4){ // CHURCH
            c.displayChurch();
            c.churchMenu(name);
            system("clear");
            m.move('d');
            m.displayMap();
        }
        else if(m.getPlayerRow() == 2 && m.getPlayerCol() == 1){ // STORE
            //print store display
            //print store words
            //print store menu
        }
        else if(m.getPlayerRow() == 1 && m.getPlayerCol() == 1){ // FARM
            f.displayFarm();
            f.farmMenu(name);
            system("clear");
            m.move('d');
            m.displayMap();
        }
        else if(m.isTreeLocation(m.getPlayerRow(),m.getPlayerCol())){
            // call character function that checks inventory and prints menues based on that
            //if( tree is broken thru){
            // call tree function that displays menues to break glass, checks inventory
            cout << "CANT" << endl;
            
        }
        
        
        // moving mechanics
        char keyChar;
        cin >> keyChar;
        m.move(keyChar);
        system("clear");
    }

    
    
}
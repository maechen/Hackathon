#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "auxilliary_functions.cpp"
#include "map.hpp"
#include "farm.hpp"
#include "bank.hpp"
#include "church.hpp"
#include "store.hpp"
#include "school.hpp"
#include "character.hpp"
#include "tree.hpp"

using namespace std;

void displayKey(){
    cout << "🏡 - farm              🏫 - school" << endl;
    cout << "🏪 - general store     ⛪ - church" << endl;
    cout << "🏠 - spawn point       🏦 - bank" << endl;
}

int main(){
    string cont; 
    system("clear");
    cout << BOLDWHITE << "**********************************************************************************" << endl;
    cout << endl;
    cout <<"              SSSSS   III  LL     V       V   EEEEE  RRRRR" << endl;     
    cout <<"              S        I   LL      V     V    E      R   RR" << endl;  
    cout <<"               SSSSS   I   LL       V   V     EEEEE  RRRRR " << endl;
    cout <<"                   S   I   LL        V V      E      RR RR " << endl;
    cout <<"              SSSSS   III  LLLLLL     V       EEEEE  RR   RR  " << endl;
    cout << endl;
    cout << endl;
    cout <<"              HH  HH   OOOO   LL      LL      OOOO    WW      WW" << endl;     
    cout <<"              HH  HH  OO  OO  LL      LL     OO  OO   WW      WW" << endl;  
    cout <<"              HHHHHH  OO  OO  LL      LL     OO  OO   WW   W  WW" << endl;
    cout <<"              HH  HH  OO  OO  LL      LL     OO  OO    WW  W  WW" << endl;
    cout <<"              HH  HH   OOOO   LLLLLL  LLLLLL  OOOO      WW   WW" << endl;
    cout << endl;
    cout << "**********************************************************************************" << RESET << endl;
    cout << endl;

    //backstory:
    cout << CYAN << "On a snowy morning, you wake up to your house shaking. " << endl;
    cout << "It must be another earthquake. " << endl;
    cout << "You've lived in Silver Hollow your whole life, " << endl;
    cout << "but your memory feels a little hazy, " << endl;
    cout << "and you can't quite pinpoint where everything is." << endl;
    cout << "Explore the town to find out where things are, " << endl;
    cout << "and to figure whats going on here." << RESET << endl;
    cout << endl;
    cout << BLACK << "Press 'c' to continue" << RESET << endl;
    cin >> cont;
    system("clear");
    cout << "Please enter your name: ";
    
    string name;
    cin >> name;
    system("clear");

    cout << "DIRECTIONS:" << endl;
    cout << "*If you forget what the buildings are, the mapkey is always displayed above the map." << endl;
    cout << "*Move your character using AWSD keys." << endl;
    cout << "*Enter the corresponding number when selecting actions / collecting items." << endl;
    cout << "*Once your inventory is full, you can only swap out the last item." << endl;
    cout << endl;
    cout << BLACK << "Press 'c' to continue" << RESET << endl;
    cin >> cont;
    
    system("clear");
    Map m;
    Bank b;
    Farm f;
    Church c;
    Store s;
    School sc;
    Character p(name);
    Tree t;

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
    

    while(true){
        displayKey();
        m.displayMap();
        p.printInventory();
        
        if(m.getPlayerRow() == 3 && m.getPlayerCol() == 4){ // BANK
            system("clear");
            b.displayBank();
            b.printBankMenu(f.getShovel(), s.getExplosive(), name);
            if(!b.getGold() && !p.searchInventory("  🧽 ")) p.setInventory("  🧽 ");
            if(!b.getKey() && !p.searchInventory("  🔑 ")) p.setInventory("  🔑 ");
            system("clear");
            m.move('a');
            displayKey();
            m.displayMap();
            p.printInventory();
        }
        else if(m.getPlayerRow() == 1 && m.getPlayerCol() == 4){ // SCHOOL
            system("clear");
            sc.displaySchool();
            sc.schoolMenu();
            if(!sc.getSled() && !p.searchInventory("  🛷 ")) p.setInventory("  🛷 ");
            if(!sc.getLadder() && !p.searchInventory("  🪜 ")) p.setInventory("  🪜 ");
            system("clear");
            m.move('a');
            displayKey();
            m.displayMap();
            p.printInventory();
        }
        else if(m.getPlayerRow() == 2 && m.getPlayerCol() == 4){ // CHURCH
            system("clear");
            c.displayChurch();
            c.churchMenu(name);
            if(!c.getBricks() && !p.searchInventory("  🧱 ")) p.setInventory("  🧱 ");
            if(!c.getCandles() && !p.searchInventory("  🕯️ ")) p.setInventory("  🕯️ ");
            system("clear");
            m.move('a');
            displayKey();
            m.displayMap();
            p.printInventory();
        }
        else if(m.getPlayerRow() == 2 && m.getPlayerCol() == 1){ // STORE
            system("clear");
            s.displayStore();
            s.storeMenu();
            if(!s.getExplosive() && !p.searchInventory("  💣 ")) p.setInventory("  💣 ");
            if(!s.getSaw() && !p.searchInventory("  🪚 ")) p.setInventory("  🪚 ");
            system("clear");
            m.move('d');
            displayKey();
            m.displayMap();
            p.printInventory();
        }
        else if(m.getPlayerRow() == 1 && m.getPlayerCol() == 1){ // FARM
            system("clear");
            f.displayFarm();
            f.farmMenu(name);
            if(!f.getShovel() && !p.searchInventory("  🧹 ")) p.setInventory("  🧹 ");
            if(!f.getHammer() && !p.searchInventory("  🔨 ")) p.setInventory("  🔨 ");
            system("clear");
            m.move('d');
            displayKey();
            m.displayMap();
            p.printInventory();
        }
        else if(m.isTreeLocation(m.getPlayerRow(),m.getPlayerCol())){
            system("clear");
            t.displayTreeMenu(c.getCandles(), s.getSaw() , s.getExplosive() , sc.getLadder(), p.getName());
            system("clear");
            t.displayPassed(c.getBricks(),f.getHammer(), b.getGold(), p.getName());
            m.setPlayerPosition(3,2);
            displayKey();
            m.displayMap();
            p.printInventory();
        }
        
        
        // moving mechanics
        char keyChar;
        cin >> keyChar;
        m.move(keyChar);
        system("clear");
    }
}
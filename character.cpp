#include <iostream>
#include "character.hpp"

using namespace std;

Character::Character(string name_){
    counter = 0;
    name = name_;
    for(int i = 0; i < 5; i++){
        inventory[i] = "     ";
    }
}

string Character::getName(){
    return name;
}

void Character::setName(string name_){
    name = name_;
}

bool Character::isEmpty(){
    if(counter == 0) return true;
    return false;
}
bool Character:: isFull(){
    if(counter == 5){
        return true;
    } 
    return false;
}

bool Character::searchInventory(string tool){
    if(!isEmpty()){
        for(int i = 0; i < counter; i++){
            if(inventory[i] == tool) return true;
        }
    }
    else{
        inventory[4] = tool;
    }
    return false;
}

void Character::setInventory(string tool){
    if(isFull() == false){
        inventory[counter++] = tool;
    }
}

void Character::printInventory(){
    cout << "           INVENTORY          " << endl;
    cout << "-------------------------------" << endl;
    cout << "|";
    for(int i = 0; i < 5; i++){
        cout << inventory[i] << "|";
    }
    cout << endl;
    cout << "-------------------------------" << endl;
}
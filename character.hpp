#include <iostream>
#include <vector>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

#pragma once

class Character
{
    private:
        string inventory[5];
        string name;
        int counter;

    public:
        Character(string name_);
        string getName();
        void setName(string name_);
        bool isEmpty();
        bool isFull();
        bool searchInventory(string tool);
        void setInventory(string tool);
        void printInventory();

};

#endif
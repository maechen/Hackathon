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

    public:
        Character();
        string getName();
        void setName(string name_);

};

#endif
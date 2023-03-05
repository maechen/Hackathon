#include <iostream>
using namespace std;

#ifndef FARM_H
#define FARM_H

#pragma once


class Farm
{
    private:
        bool hammer;
        bool shovel;
        bool leave;
    
    public:
        Farm();
        bool getHammer(); 
        bool getShovel();
        bool setLeave(bool stat);
        bool getLeave();
        void setHammer(bool stat);
        void setShovel(bool stat);
        void displayFarm();
        void farmMenu(string Char_name);
};

#endif
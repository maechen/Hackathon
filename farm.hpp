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
        

    public:
        Farm();
        bool getHammer(); 
        bool getShovel();
        void setHammer(bool stat);
        void setShovel(bool stat);
};

#endif
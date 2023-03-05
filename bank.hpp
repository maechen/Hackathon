#include <iostream>
#include <vector>
using namespace std;

#ifndef BANK_H
#define BANK_H

#pragma once


class Bank
{
    private:
        bool key;
        bool gold;

    public:
        Bank();
        bool getKey();
        void setKey(bool stat);
        bool getGold();
        void setGold(bool stat);
        
};

#endif
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
        bool leave;

    public:
        Bank();
        bool getKey();
        bool getLeave();
        bool setLeave(bool stat);
        void setKey(bool stat);
        bool getGold();
        void setGold(bool stat);
        void displayBank();
        void printBankMenu(bool shovelStat, bool explosiveStat, string Char_name);
        
};

#endif
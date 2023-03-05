#include <iostream>
#include <vector>
using namespace std;

#ifndef BANK_H
#define BANK_H

#pragma once


class Tree
{
    private:
        bool pass;

    public:
        Tree();
        bool getPass();
        bool setPass(bool stat);
        void displayTreeMenu(bool candleStat, bool sawStat, bool explodeStat, bool ladderStat,bool brickStat, bool goldStat, bool hammerStat, string Char_name);
};

#endif
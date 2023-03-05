#include <iostream>
using namespace std;

#ifndef TREE_H
#define TREE_H

#pragma once


class Tree
{
    private:
        bool pass;

    public:
        Tree();
        bool getPass();
        bool setPass(bool stat);
        void displayTreeMenu(bool candleStat, bool sawStat, bool explodeStat, bool ladderStat, string name);
        void displayPassed(bool brickStat, bool hammerStat, bool goldStat, string name);
};

#endif
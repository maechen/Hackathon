#include <iostream>
#include <vector>
using namespace std;

#ifndef CHURCH_H
#define CHURCH_H

#pragma once


class Church
{
    private:
        bool candles;
        bool bricks;

    public:
        Church();
        bool getCandles();
        bool getBricks();
        void setCandles(bool stat);
        void setBricks(bool stat);

};

#endif
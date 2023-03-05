#include <iostream>
using namespace std;

#ifndef SCHOOL_H
#define SCHOOL_H

#pragma once


class School
{
    private:
        bool sled;
        bool ladder;

    public:
        School();
        bool getSled();
        void setSled(bool stat);
        bool getLadder();
        void setLadder(bool stat);
        void displaySchool();
        void storeMenu();
};

#endif
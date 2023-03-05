#include <iostream>
using namespace std;

#ifndef STORE_H
#define STORE_H

#pragma once

class Store
{
    private:
        bool saw;
        bool explosive;
        string clerk[];

    public:
        Store();
        bool getSaw();
        bool getExplosive();
        void setSaw(bool stat);
        void setExplosive(bool stat);

};

#endif
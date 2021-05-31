#ifndef METAL_H
#define METAL_H
#include"Band.h"

using namespace std;

class Metal : public Band{
public:
    Metal(int d,int m,int a);
    string get_age();
    int get_darkness();


private:
    int darkness;
};
#endif

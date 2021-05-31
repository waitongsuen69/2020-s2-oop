#ifndef ROCKET_H
#define ROCKET_H
#include"FuelRecordStation"
using namespace std;

class Rocket{
public:
    Rocket();
    string get_name();
    FuelRecordStation* get_flowMeter();
    
    
    
    
private:
    FuelRecordStation * flowMeter;
    string name;
};
#endif

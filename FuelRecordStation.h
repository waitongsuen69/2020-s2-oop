#ifndef FUELRECORD_H
#define FUELRECORD_H
ç
using namespace std;

class FuelRecordSensor {
public:
    FuelRecordSensor();
    int get_id();
    FuelFlowSensor* get_reading();
    int get_launch_date();
    string get_sectionI();
    string get_pipeline();
    void add_another_reading(int current_time);
private:
    int id;
    FuelFlowSensor* reading;
    int launch_date;
    string section;     //may include char and number
    string pipeline;    //may include char and number
    
    
    
};

#endif

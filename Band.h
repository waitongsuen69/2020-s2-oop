#ifndef BAND_H
#define BAND_H

using namespace std;

class Band {
public:
    Band();
    Band(int m);
    Band(int m,int a);
    virtual string get_age();
    virtual int get_members();
    
    
    
    
private:
    int members;
    int age;
};
#endif

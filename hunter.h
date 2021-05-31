#ifndef HUNTER_H
#define HUNTER_H
#include"animal.h"

using namespace std;

class hunter : public animal{
public:
    hunter();
    ~hunter();
    hunter(string n, int v);  // create a hunter with name n and body volume v
    string get_name();
    void set_kills(int k);
    int get_kills();
    
private:
    int kills ;               // how many kills have been recorded, initialised to 0
    static int nextID ;       //initialize 1000
};
#endif

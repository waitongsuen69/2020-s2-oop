#ifndef DYMO_H
#define DYMO_H
#include"BookStore.h" 

using namespace std;

class Dymocks : public BookStore{
public:
	Dymocks(bool o);      // sets isOnline attribute with o
                     // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                     // and address equal to the empty string

	float get_onlineTax();
    void set_nextNumStores(int n);
    void set_isOnline(bool tf);
    void set_storeID(int id);

    int get_storeID();
    bool get_isOnline();
    int get_nextNumStores();


	int storeID;          // unique store ID 
	bool isOnline;       // class attribute      
private:
	static int nextNumStores;
};
#endif
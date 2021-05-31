#ifndef BARN_H
#define BARN_H
#include"BookStore.h" 

using namespace std;

class BarnesNoble : public BookStore{
	public:
    BarnesNoble() ;        // inherit from base class default constructor    
    BarnesNoble(string n) ; // set name n  
    float get_onlineTax();                   // should call the corresponding constructor from the parent class
                       // with the online parameter being false
    int numSoldBooks;   // attribute for numSoldBooks, initialised to 0

void soldBook();   // increments numSoldBooks
int get_soldBooks(); // returns the books sold
};
#endif
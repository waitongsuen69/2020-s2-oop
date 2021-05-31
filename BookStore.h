#ifndef BOOKSTORE_H
#define BOOKSTORE_H

using namespace std;

class BookStore {
public:
	BookStore();
	BookStore(string n, string a, int b);   // creates a BookStore name n, address a, and number of books in the store b
	~BookStore();
	virtual float get_onlineTax()=0; // returns true if more staff is necessary
	void set_name(string nam);
	void set_address(string addres);
	void set_numBook(int num);

	string get_name();
	string get_address();
	int get_numBook();
protected:
    string name;                // the book store name
    string address;             // the book store address
     int numBook;  
   // the inventory in the store; takes only non-negative values
} ;
#endif
#include<iostream> 
#include<string>

#include"BookStore.h"

using namespace std;
    BookStore::BookStore(){
    	
    }
	BookStore::BookStore(string n, string a, int b){
		name=n;
		address=a;
		numBook=b;
	}   // creates a BookStore name n, address a, and number of books in the store b
	BookStore::~BookStore(){

	}
	void BookStore::set_name(string nam){
		name=nam;
	}
	void BookStore::set_address(string addres){
		address=addres;
	}
	void BookStore::set_numBook(int num){
		numBook=num;
	}

	string BookStore::get_name(){
		return name;
	}
	string BookStore::get_address(){
		return address;
	}
	int BookStore::get_numBook(){
		return numBook;
	}

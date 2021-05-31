#include<iostream> 
#include<string>

#include"BookStore.h"
#include"BarnesNoble.h"

using namespace std;


    BarnesNoble::BarnesNoble():BookStore(){
    numSoldBooks=0;
    }        // inherit from base class default constructor    
    BarnesNoble::BarnesNoble(string n):BookStore(n,"",) {
    name =n ;
    numSoldBooks=0;
    }

    float BarnesNoble::get_onlineTax(){

    }

void BarnesNoble::soldBook(){
	numSoldBooks+=1;
}   // increments numSoldBooks
int get_soldBooks(){
	return numSoldBooks;
} // returns the books sold
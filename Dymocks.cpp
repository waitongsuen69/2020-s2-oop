#include<iostream> 
#include<string>

#include"BookStore.h"
#include"Dymocks.h"

using namespace std;

int Dymocks::nextNumStores=0;

	Dymocks::Dymocks(bool o):BookStore("Dymocks","",1000){
		isOnline=o;
		storeID=nextNumStores;
		nextNumStores+=1;
	}     // sets isOnline attribute with o
                     // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                     // and address equal to the empty string

	float Dymocks::get_onlineTax(){
		if (isOnline=true){
			return 500;
		}else{
			return 0;
		}
	}
    void Dymocks::set_nextNumStores(int n){
    	nextNumStores=n;
    }
    void Dymocks::set_isOnline(bool tf){
    	isOnline=tf;
    }
    void Dymocks::set_storeID(int id){
    	storeID=id;
    }

    int Dymocks::get_storeID(){
    	return storeID;
    }
    bool Dymocks::get_isOnline(){
    	return isOnline;
    }

    int Dymocks::get_nextNumStores(){
    	return nextNumStores;
    }
#include<iostream>
#include<string>
#include"hunter.h"

using namespace std;

int hunter::nextID=1000;

hunter::hunter():animal(){
    
}
hunter::~hunter(){
    
}
void hunter::set_kills(int k){
    kills=k;
}
int hunter::get_kills(){
    return kills;
}

hunter::hunter(string n, int v):animal(n,v){
    animalID=nextID;
    nextID+=1;
    kills= 0;
}

string hunter::get_name(){
    return "Hunter: "+name;
}


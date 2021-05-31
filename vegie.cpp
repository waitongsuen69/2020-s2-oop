#include<iostream>
#include<string>
#include"vegie.h"

using namespace std;

int vegie::nextID=100;

vegie::vegie():animal(){
    
}
vegie::~vegie(){
    
}
string vegie::get_favourite_food(){
    return favourite_food;
}
void vegie::set_favourite_food(string f){
    favourite_food=f;
}

string vegie::get_name(){
    return "Safe: "+name;
    
}
vegie::vegie(string n,int v):animal(n,v){
    animalID=nextID;
    nextID+=1;
    favourite_food="grass";
    
}     // create a vegie with name n and body volume v


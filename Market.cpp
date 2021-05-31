#include<iostream>
#include"Market.h"
#include<string>

using namespace std;
Market::Market(){
    
}                      // no name or age is required to create a market
void Market::setName(string marName){
    Name = marName;
}  // change the market's name
string Market::getName(){
    return Name;
}
void Market::setAge(int merAge){
    Age=merAge;
}      // change the market's age
int Market::getAge(){
    return Age;
}

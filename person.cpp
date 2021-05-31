#include<iostream>
#include"person.h"

using namespace std;

string person::getName(){
    return Name;

}

int person::getSalary(){
    return Salary;
    
}

void person::setName(string myName){
    Name = myName;
}

void person::setSalary(int mySalary){
    Salary = mySalary;
}

person::person(string myName, int mySalary){
    Name=myName;
    Salary=mySalary;
}

person::person(){
    
}

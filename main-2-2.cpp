#include<iostream>
#include"aircraft.h"
#include"person.h"
#include<string>

using namespace std;

int main(){
    person A("A",1);
    person B("B",2);
    person C("C",3);
    aircraft plane("A380",A,B);
    plane.setPilot(C);
    plane.setCoPilot(A);
    
    plane.printDetails();
    
}

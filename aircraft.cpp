#include<iostream>
#include"aircraft.h"
#include<string>

using namespace std;

// a pilot and copilot must be provided when creating an aircraft
aircraft::aircraft(string callsign,person thePilot,person theCoPilot){
    pilot = thePilot;
    copilot= theCoPilot;
    signis = callsign;
}

void aircraft::setPilot(person thePilot){
    pilot = thePilot;
}     // change the pilot
person aircraft::getPilot(){
    return  pilot;
}
void aircraft::setCoPilot(person theCoPilot){
    copilot=theCoPilot;
}  // change the co-pilot
person aircraft::getCoPilot(){
    return copilot;
}
void aircraft::printDetails(){
    cout<<signis<<endl<<pilot.getName()<<endl<<copilot.Name<<endl;
}                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.


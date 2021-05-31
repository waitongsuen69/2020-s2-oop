#include<iostream>
#include<string>

#include"Band.h"

using namespace std;

Band::Band(){
    
}
Band::Band(int m,int a){
    age=a;
    members=m;
}
Band::Band(int m){
    members=m;
    age=2020;
}
string Band::get_age(){
    if (age<=2015){
        return "old";
    }else{
        return "young";
    }
}
int Band::get_members(){
    return members;
}


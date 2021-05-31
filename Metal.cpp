#include<iostream>
#include<string>
#include"Metal.h"
#include"Band.h"

using namespace std;

Metal::Metal(int d,int m,int a): Band(m,a) {
     darkness=d;

}



int Metal::get_darkness(){
    return darkness;
}

string Metal::get_age(){
    if( darkness <10 &&  darkness>=0 ){
        return "This " + Band::get_age()+" metal band is not very dark at all.";
    }else if( darkness<100 &&  darkness>=10){
        return "This " + Band::get_age()+" metal band is dark.";
    }else if( darkness<200&&  darkness >=100){
        return "This " + Band::get_age()+" metal band is very dark!";
    }else if( darkness<800&&  darkness >=200){
        return "This " + Band::get_age()+" metal band is extremely dark!!";
    }else{
        return "This " + Band::get_age()+" metal band isprofoundly dark!!!";
    }
}

l#include<iostream>
#include"meerkat.h"
#include"cart.h"

using namespace std;

int main(){
    meerkat A,B,C,D,E;
    A=meerkat(4,"a");
    B=meerkat(3,"b");
    C=meerkat(2,"c");
    D=meerkat(1,"d");
    E=meerkat(0,"e");
    
    cart c1;
    
    bool a,b,c,d,e;
    a=c1.addMeerkat(A);
    c1.printMeerkats();
    
    b=c1.addMeerkat(B);
    c1.printMeerkats();
    
    c=c1.addMeerkat(C);
    c1.printMeerkats();
    
    d=c1.addMeerkat(D);
    c1.printMeerkats();
    
    e=c1.addMeerkat(E);
    c1.printMeerkats();
    
    return 0;
}

#include<iostream>
#include"meerkat.h"
#include"cart.h"

using namespace std;
cart::cart(){
    index=0;
    
}
bool cart::addMeerkat(meerkat cat){
    bool not_full;
    if(index<4){
        oncart[index]=cat;
        not_full=true;
        index+=1;
    }else{
        cout<<"cart is full "<<endl;
        not_full=false;
    }
    return not_full;
}
void cart::emptyCart(){
    index=0;
}

void cart::printMeerkats(){
    for(int i=0;i<index;i++){
        cout<<oncart[i].Name<<" "<<oncart[i].Age<<endl;
    }
    cout<<endl;
}


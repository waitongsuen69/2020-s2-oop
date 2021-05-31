#include<iostream>
#include"Market.h"
#include<string>

int main(){
    Market A;
    A.setAge(14);
    A.setName("7-11");
    std::cout<<A.Name <<"  Year:"<<A.Age<<std::endl;
    return 0;
}

#include<iostream>


void print_as_binary(std::string decimal_number){
    int num=std::stoi(decimal_number);
    int i=0;
    int length=0;
    int array[1000];
    while(num !=0){
        array[i]= num%2;
        num=num/2;
        i++;
    }
    for (int j=i-1;j>=0;j--){
        std::cout<<array[j];
    }
    std::cout<<std::endl;
}

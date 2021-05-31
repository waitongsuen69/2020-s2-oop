#include<iostream>

extern void print_as_binary(std::string);

int main(){
    std::string str="12345";
    print_as_binary(str);
    return 0;
}

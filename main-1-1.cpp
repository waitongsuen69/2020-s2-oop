#include<iostream>

extern int *readNumbers() ;
extern void printNumbers(int *numbers,int length) ;

int main(){
    int* newarray;
    newarray=readNumbers();
    printNumbers(newarray,10);
}

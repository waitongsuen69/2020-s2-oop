#include<iostream>

extern int *readNumbers() ;
extern void printNumbers(int *numbers,int length) ;
extern void hexDigits(int *numbers,int length) ;

int main(){
    int* newarray;
    newarray=readNumbers();
    hexDigits(newarray,10);
}


#include<iostream>

extern int *readNumbers() ;
extern void printNumbers(int *numbers,int length) ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
extern int *reverseArray(int *numbers1,int length) ;

int main(){
    int* newarray;
    int* array2;
    bool result;
    newarray=readNumbers();
    array2=reverseArray(newarray,10) ;
    printNumbers(array2,10);

}



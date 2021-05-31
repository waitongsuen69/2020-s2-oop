#include<iostream>

extern  int *createArray(int n);
extern void displayArraySubsets(int *nums,int len) ;

int main (){
	int n=4;
    int *array;
    array=createArray(n);
    displayArraySubsets(array,n);
    delete[] array;
    return 0;
}
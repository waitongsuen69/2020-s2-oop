#include<iostream>

extern  int *createArray(int n);
extern void displayArray(int *numbers, int length);

int main (){
	int n=4;
    int *array;
    array=createArray(n);
    displayArray(array,n);
    delete[] array;
    return 0;
}
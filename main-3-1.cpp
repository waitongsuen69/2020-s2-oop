#include<iostream>

extern  int *createArray(int n);
void bonus(int *numbers, int length) ;

int main (){
	int n=4;
    int *array;
    array=createArray(n);
    bonus(array,n);
    delete[] array;
    return 0;
}
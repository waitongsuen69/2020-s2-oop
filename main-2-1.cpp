#include<iostream>

extern  int *createArray(int n);
extern void okToEat(int* ratings, int len);

int main (){
	int n=4;
    int *array;
    array=createArray(n);
    okToEat(array,n);
    delete[] array;
    return 0;
}
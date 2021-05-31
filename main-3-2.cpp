#include<iostream>

extern  int *createArray(int n);
extern bool sortedArray(int *numbers,int length) ;

int main (){
	int n=4;
    int *array;

    array=createArray(n);
    std::cout<<sortedArray(array,n)<<std::endl;
    delete[] array;
    return 0;
}
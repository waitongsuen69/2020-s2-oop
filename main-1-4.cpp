#include <iostream>
#include <stdlib.h>

extern int sumtwo(int*,int*,int);

int main(){
    int array1[5]={1,2,3,4,5};
    int array2[5]={2,3,4,5,6};
    int count=5;
    std::cout<<"sum of two array"<<sumtwo(array1,array2,count)<<std::endl;
    return 0;
    
}

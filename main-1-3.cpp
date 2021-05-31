#include <iostream>
#include <stdlib.h>

extern int count(int*,int,int);

int main()
{
    int nums[5]={1,2,3,3,5};
    int index=5;
    int number=3;
    std::cout<<"we have 3 :"<<count(nums,index,number)<<std::endl;
    // your code goes here ...
    return 0 ;
}


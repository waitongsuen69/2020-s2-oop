#include <iostream>
#include <stdlib.h>

extern int maximum(int*,int);

int main(int argc,char **argv)
{
    // your code goes here ...
    int nums[5]={2,3,4,6,1};
    int number=5;
    std::cout<<"maximum is "<<maximum(nums,number);
    return 0 ;
}


#include <iostream>
#include <stdlib.h>

extern int minimum(int*,int);

int main(int argc,char **argv)
{
    // your code goes here ...
    int nums[5]={2,3,4,5,1};
    int number=5;
    std::cout<<"minimum is "<<minimum(nums,number);
    return 0 ;
}

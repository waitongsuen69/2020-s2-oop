#include <iostream>
#include <stdlib.h>

extern double average(int*,int);

int main(int argc,char **argv)
{
    double average_num=0;
    int nums[5]={1,2,3,4,5};
    int count = 5;
    average_num=average(nums,count);
    std::cout<<"average is "<<average_num<<std::endl;

    return 0 ;
}

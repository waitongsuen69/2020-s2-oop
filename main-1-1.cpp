#include<iostream>
#include<stdlib.h>

extern int sum_array(int*, int);

int main(){
    int sum_of_array=0;
    int nums[5]={1,2,3,4,5};
    sum_of_array=sum_array(nums,5);
    std::cout<<"sum is "<<sum_of_array<<std::endl;
    
    return 0;
}

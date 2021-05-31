#include<iostream>

extern int maximum_sum(int *nums,int length) ;

int main(){
    int length=10;
    int array[10]={ 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int *nums=&array[0];
    int sum=0;
    sum=maximum_sum(nums,length);
    std::cout<<sum<<std::endl;
    return 0;
}

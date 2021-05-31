#include<iostream>

extern void print_sevens(int *nums,int length) ;

int main(){
    int number_array[6]={2,3,4,7,14,49};
    int *nums=&number_array[0];
    int length = 6;
    print_sevens(nums,length);
    return 0;
}

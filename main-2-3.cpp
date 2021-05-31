#include <iostream>
#include <stdlib.h>

extern void twofivenine(int*,int);

int main(int argc,char **argv)
{
    int array[10]={3,2,2,4,5,5,5,2,9,8};
    int count=10;
    twofivenine(array,count);
    return 0 ;
}

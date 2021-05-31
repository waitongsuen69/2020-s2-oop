#include <iostream>
#include <stdlib.h>

extern bool ascending(int*,int);

int main(int argc,char **argv)
{
    int array[10]={2,2,4,5,5,5,9,9,10,12};
    int count=10;
    std::cout<<"upper case : "<<ascending(array,count)<<std::endl;

    return 0 ;
}

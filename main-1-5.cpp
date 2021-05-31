#include <iostream>
#include <stdlib.h>

extern int count_even(int);

int main(int argc,char **argv)
{
    // your code goes here ...
    int num=8;
    std::cout<<num<<"have even number:"<<count_even(num)<<std::endl;
    return 0 ;
}

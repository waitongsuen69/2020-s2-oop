#include <iostream>

extern int binary_to_number(int[],int);
using namespace std;

int main (){
    int array[]={1,1,0,0,0,1,1};
    int size=sizeof(array)/4;
    int decimal=0;
    decimal = binary_to_number(array,size);
    cout<<"your number is :"<<decimal<<endl;
    return 0;
}

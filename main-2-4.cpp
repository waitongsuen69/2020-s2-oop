#include<iostream>

extern int sum_min_and_max(int[], int);
extern int max_integer(int[], int);
extern int min_integer(int[], int);

using namespace std;

int main(){
    int sum;
    int max;
    int min;
    int array[]={1,3,4,38,5,3,-1};
    int length = sizeof(array)/4;
    sum=sum_min_and_max(array,length);
    max=max_integer(array,length);
    min=min_integer(array,length);
    cout<<sum<<endl<<max<<endl<<min<<endl;
}

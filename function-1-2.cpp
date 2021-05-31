#include<iostream>

double average(int array[], int n)
{
    double sum=0;
    double average=0;
    if(n<1){
        average=0;
    }else {
        for (int i=0;i<n;i++){
            sum=sum+array[i];
        }
        average=sum/n;
    }
    return average;
}

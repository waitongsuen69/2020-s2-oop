#include<iostream>

int sum_array(int array[], int n){
    int total=0;
    if (n<1){
        total=0;
    }else{
        for(int i=0;i<n;i++){
            total=total+array[i];
        }
    }
    return total;
}

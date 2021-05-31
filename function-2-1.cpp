#include<iostream>

int minimum(int array[], int n){
    int minimum= array[0];
    if (n<1){
        minimum=0;
    }else{
        for (int i=1;i<n;i++){
            if(minimum>array[i]){
                minimum=array[i];
                }
            
            }
    }
    return minimum;
}

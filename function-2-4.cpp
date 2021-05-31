#include<iostream>

bool ascending(int array[], int n){
    bool ascend=true;
    int index=0;
    while(ascend==true && index != n-1){
        if (array[index]>array[index+1]){
            ascend=false;
        }
        index+=1;
    }
    return ascend;
}


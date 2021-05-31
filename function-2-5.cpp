#include<iostream>

bool descending(int array[], int n){
    bool descend=true;
    int index=0;
    while(descend==true && index != n-1){
        if (array[index]<array[index+1]){
            descend=false;
        }
        index+=1;
    }
    return descend;
}



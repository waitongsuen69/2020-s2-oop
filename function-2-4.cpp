#include<iostream>

int sum_min_and_max(int integers[], int length){
    int sum=0;
    int min=integers[0];
    int max=integers[0];
    if(length<=0){
        sum=-1;
    }else{
        for (int i=1;i<length;i++){
            if(integers[i]>max){
                max=integers[i];
            }else{
                min=integers[i];
            }
        }
        sum=max+min;
    }
    return sum;
}


int max_integer(int integers[], int length){
    int max=integers[0];
    if(length<=0){
        max=-1;
    }else{
        for (int i=1;i<length;i++){
            if(integers[i]>max){
                max=integers[i];
            }
        }
    }
    return max;
}


int min_integer(int integers[], int length){
    int min=integers[0];
    if(length<=0){
        min=-1;
    }else{
        for (int i=1;i<length;i++){
            if(integers[i]<min){
                min=integers[i];
            }
        }
    }
    return min;
}

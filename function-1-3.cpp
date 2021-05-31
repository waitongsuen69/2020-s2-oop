#include<iostream>
// function to ...
int count(int array[], int n, int num)
{
    // your code goes here
    int count=0;
    if (n<1){
        count=0;
    }else{
        for (int i=0;i<n;i++){
            if(num == array[i]){
                count =count +1;
            }
        }
    }
    return count;
}

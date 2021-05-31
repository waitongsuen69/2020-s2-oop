#include<iostream>

int count_even(int number){
    int count_Even=0;
    if (number<1){
        count_Even=0;
    }else{
    for (int i=1;i<=number;i++){
        if (i%2==0){
            count_Even=count_Even+1;
        }
    }
    }
    
    return count_Even;
}

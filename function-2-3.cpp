#include<iostream>

int sum_if_a_palindrome(int integers[], int length){
    bool palindrome=true;
    int sum=0;
    
    if(length<=0){
        palindrome= false;
    }else{
    for(int j=0;j<length/2;j++){
        if (integers[j]!=integers[length-j-1]){
            palindrome=false;
            break;
        }
      }
    }
    if (palindrome == true ){
        for (int i=0;i<length;i++){
                sum=sum+integers[i];
        }
    }else
        {
            sum=-2;
    }
    return sum;
}


bool is_a_palindrome(int integers[], int length){
    bool palindrome=true;
    if(length<=0){
        palindrome= false;
    }else{
    for(int j=0;j<length/2;j++){
        if (integers[j]!=integers[length-j-1]){
            palindrome=false;
            break;
            }
        }
    }
    return palindrome;
}


int sum_elements(int integers[], int length){
    int sum=0;
    if(length<=0){
        sum=-1;
    }else{
    for (int i=0;i<length;i++){
            sum=sum+integers[i];
        }
    }
    return sum;
}

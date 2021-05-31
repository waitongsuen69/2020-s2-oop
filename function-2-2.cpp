#include<iostream>

using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){
    int decimal_numbers=0;
    for(int i=0;i<number_of_digits;i++){
        int result=0;
        if ( binary_digits[i] != 0){
            result=1;
            for (int j=0;j<number_of_digits-i-1;j++){
                result=result*2;
            }
        }
        decimal_numbers =decimal_numbers+result;    }
    return decimal_numbers;
}

#include<iostream>



int binary_to_number(int binary_digits[], int number_of_digits){
	int decimal=0;
    for (int i=0;i<number_of_digits;i++){
    	int num_inpo=1;
    	for (int j=0;j<number_of_digits-1-i;j++){
    		num_inpo=num_inpo*2;
    	}
    	decimal=decimal+binary_digits[i]*num_inpo;
    }
	return decimal;
}
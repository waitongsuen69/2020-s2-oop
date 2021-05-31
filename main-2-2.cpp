#include<iostream>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
	int bin_array[4]={1,1,0,1};
	int number_of_digits=4;
	std::cout<<binary_to_number(bin_array,number_of_digits)<<std::endl;

	return 0;
}
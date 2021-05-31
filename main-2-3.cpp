#include<iostream>

extern int sum_if_a_palindrome(int integers[], int length);
extern bool is_a_palindrome(int integers[], int length);
extern int sum_elements(int integers[], int length);

int main(){
	int array[6]={1,2,0,0,2,1};
    int length=6;
	std::cout<<"sum if"<<sum_if_a_palindrome(array,length)<<std::endl;
	std::cout<<"if "<<is_a_palindrome(array,length)<<std::endl;
	std::cout<<"sum"<<sum_elements(array,length)<<std::endl;
}

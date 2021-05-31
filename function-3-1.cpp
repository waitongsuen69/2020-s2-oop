#include<iostream>

int *createArray(int n){
	int * array= new int[n];
	for (int i=0;i<n;i++){
		std::cin>>*(array+i);
	}
	return array;
}

void bonus(int *numbers, int length){
	for (int i=0;i<length;i++){
		float result=0;
		result=*(numbers+i)+50.55;
		if(result >=0){
			std::cout<<"New value: "<<result<<std::endl;
		}else{
			std::cout<<"Negative account: "<<result<<std::endl;
		}
	}
}
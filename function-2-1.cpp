#include<iostream>

int *createArray(int n){
	int * array= new int[n];
	for (int i=0;i<n;i++){
		std::cin>>*(array+i);
	}
	return array;
}

void okToEat(int* ratings, int len){
	for (int i=0;i<len;i++){

		switch(*(ratings+i))
		{
			case 100:
					std::cout<<i<<" "<<*(ratings+i)<<" ";
			std::cout<<"Super clean, Very safe";
			break;
			case 80:
					std::cout<<i<<" "<<*(ratings+i)<<" ";
			std::cout<<"Won't get you sick";
			break;
			case 60:
					std::cout<<i<<" "<<*(ratings+i)<<" ";
			std::cout<<"Make sure it's well-done";
			break;
			case 40:
					std::cout<<i<<" "<<*(ratings+i)<<" ";
			std::cout<<"No";
			break;
			default:
			std::cout<<"Sorry, unknown ranking.";
			break;

		}
		std::cout<<std::endl;
	}
}
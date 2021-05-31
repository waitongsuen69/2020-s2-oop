#include<iostream>

int *createArray(int n){
	int * array= new int[n];
	for (int i=0;i<n;i++){
		std::cin>>*(array+i);
	}
	return array;
}


void displayArraySubsets(int *nums,int len) {
    
	for (int start=0;start<len;start++){
		for (int end=start;end<len;end++){
	
            std::cout<<"{";
			
            for (int i=start;i<=end;i++){
			
                std::cout<<*(nums+i);
               
                if(i!=end){
                
                    std::cout<<",";
               
                }
                
                
			}
			std::cout<<"}";
			if(end != len-1){
				std::cout<<",";
			}
		}
		std::cout<<std::endl;
	}
}

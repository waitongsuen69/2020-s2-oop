#include<iostream>

int *createArray(int n){
	int * array= new int[n];
	for (int i=0;i<n;i++){
		std::cin>>*(array+i);
	}
	return array;
}

bool sortedArray(int *numbers,int length) {
	if(length<1){
		return false;
	}
	bool result=true;
	int ascend=0;
	if (*(numbers)<*(numbers+1)){
		ascend=1;
	}else{
		ascend=0;
	}
    
	for (int i=0;i<length-1;i++){
        if(ascend=1){
        	if (*(numbers+i)<*(numbers+1+i)){
        	}else{
        		return false;
        	}
        }else{
        	if (*(numbers+i)>*(numbers+1+i)){
        	}else{
        		return false;
        	}
        }
	}
	// int index=0;
	// while (index<length && result_a==true){
	// 	if(*(numbers+index)>*(numbers+index+1)){
	// 		result_a=true;
	// 		index+=1;
	// 	}else{
	// 		result_a=false;
	// 	}
	// }
	// int index_d=0;
	// while (index_d<length && result_d==true){
	// 	if(*(numbers+index_d)<*(numbers+index_d+1)){
	// 		result_d=true;
	// 		index_d+=1;
	// 	}else{
	// 		result_d=false;
	// 	}
	// }
 //    int result=true;
	// if(result_a ==false && result_d==false ){
 //          result=false;
	// }
	return result;
}

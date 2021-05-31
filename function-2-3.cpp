#include<iostream>
int sum_if_a_palindrome(int integers[], int length){
	int sum=0;
	int tf=0;
	for(int i=0;i<length/2;i++){
		if (integers[i] != integers[length-1-i]){
			tf=tf-1;
		}
	}
	if (tf<0){
		sum=-2;
	}else{
		for (int j=0;j<length;j++){
			sum=sum+integers[j];
		}
     }
    if (length<=0){
    	sum=-1;
    }
	return sum;
}

bool is_a_palindrome(int integers[], int length){
	bool is=true;
	int i=0;
		if (length<=0){
		is=false;
	}
    while(i<length/2 && is==true ){
		if (integers[i] != integers[length-i-1]){
           is=false;
		}
	}

	return is;
}

int sum_elements(int integers[], int length){
	int sum=0;
		if(length<=0){
		sum=-1;
	}else{	
		for (int j=0;j<length;j++){
			sum=sum+integers[j];
		}
	}

return sum;
}

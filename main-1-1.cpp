#include<iostream>

extern void printer(int array[10][10]);


int main(){
	int array[10][10];
    for (int i=0;i<10;i++){
  	    for (int j=0;j<10;j++){
  	    	if(i<=j){
  	    		array[i][j]=i;
  	    	}else{
  	    		array[i][j]=j;
  	    	}
  	}
  }
  printer(array);
}
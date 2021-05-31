#include<iostream>

int maximum(int array[], int n){
        int maximum= array[0];
        if (n<1){
            maximum=0;
        }else{
            for (int i=1;i<n;i++){
                if(maximum<array[i]){
                    maximum=array[i];
                    }
                
                }
        }
        return maximum;
}

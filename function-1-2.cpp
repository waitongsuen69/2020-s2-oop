#include<iostream>

int identity(int array[10][10]){
    int output=1;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if (i==j && array[i][j]!=1){
                output=0;
            }
            if(i!=j && array[i][j] != 0){
                output=0;
            }
        }
    }
    return output;
}

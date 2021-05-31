#include<iostream>


int *readNumbers(){
    int *get=new int[10];
    for (int i=0;i<10;i++){
        std::cin>>get[i];
    }
    return get;
}

void printNumbers(int *numbers,int length){
    for (int i=0;i<length;i++){
        std::cout<<i<<" "<<numbers[i]<<std::endl;
    }
}

bool equalsArray(int *numbers1,int *numbers2,int length)
{
    bool answer = true;
    for(int i=0;i<length;i++){
        if (numbers1[i] != numbers2[i]){
            return false;
            break;
        }
    }
    return answer;
}

int *reverseArray(int *numbers1,int length){
    int * returnarray=new int [10];
    for (int i=0;i<length;i++){
        returnarray[length-i-1]=numbers1[i];
    }
    return returnarray;
}


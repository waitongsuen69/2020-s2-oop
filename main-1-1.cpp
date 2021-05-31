#include<iostream>

extern int diagonal(int[4][4]);

int main(){
    int square_array[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            std::cout << square_array[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<"sum is "<<diagonal(square_array)<<std::endl;
    
}

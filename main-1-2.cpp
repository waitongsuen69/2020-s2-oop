#include<iostream>

extern int identity(int[10][10]);

int main(){
    int tenarray[10][10];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if(i==j){
                tenarray[i][j]=1;
            }else{
                tenarray[i][j]=0;
            }
            std::cout<<tenarray[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<"identity matrix:"<<identity(tenarray);
}

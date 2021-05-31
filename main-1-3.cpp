#include<iostream>

using namespace std;

extern void cpyia(int old_array[],int new_array[],int length) ;

int main(){
    int old_array[3]={1,2,3};
    int length=3;
    int new_array[3];
    cpyia(old_array,new_array,length);
    for(int i=0;i<3;i++){
        cout<<new_array[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}

#include<iostream>

using namespace std;

extern void cpyda(double *old_array,double *new_array,int length) ;

int main(){
    double oldarray[3];
    for(int i=0;i<3;i++){
        oldarray[i]=i;
    }
    double new_array[3],*old_array;
    int length=3;
    old_array = &oldarray[0];
    cpyda(old_array,new_array,length);
    for(int i=0;i<length;i++){
        cout<<*(new_array+i)<<" ";
    }
    cout<<endl;
    return 0;
}

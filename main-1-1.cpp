#include<iostream>
#include<string>

using namespace std;
extern void copy_2d_strings(string first[][2], string second[][2], int n) ;

int main(){
    string first[3][2],second[3][2];
    int n=3;
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            first[i][j]="!";
        }
    }
    copy_2d_strings(first,second,n);
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            cout<<second[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}


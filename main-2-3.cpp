#include<iostream>

using namespace std;
extern int sum_if_a_palindrome(int[], int);
extern bool is_a_palindrome(int[], int);
extern int sum_elements(int[], int);

int main (){
    bool palindrome;
    int sum_palindromw;
    int sum;
    int array[]={1,2,3,4,4,2,1};
    int length=sizeof(array)/4;
    palindrome=is_a_palindrome(array,length);
    sum=sum_elements(array,length);
    sum_palindromw=sum_if_a_palindrome(array,length);
    cout<<palindrome<<endl<<sum_palindromw<<endl<<sum<<endl;
}

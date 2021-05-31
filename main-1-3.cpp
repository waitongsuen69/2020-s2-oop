#include<iostream>

extern void count_numbers(int array[4][4]);

int main(){
    int fbfarray[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    count_numbers(fbfarray);
    return 0;
}

#include<iostream>

void twofivenine(int array[], int n){
    int num2=0;
    int num5=0;
    int num9=0;
    for (int i=0;i<n;i++){
        switch (array[i]){
            case 2:
                num2=num2+1;
                break;
            case 5:
                num5=num5+1;
                break;
            case 9:
                num9=num9+1;
                break;
        }
        
    }
    std::cout<<"2:"<<num2<<";5:"<<num5<<";9:"<<num9<<";"<<std::endl;

}

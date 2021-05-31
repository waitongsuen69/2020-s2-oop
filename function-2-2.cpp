#include<iostream>

int inner_sum(int *nums,int start,int end){
    int sum_inner=0;
    for (int i=start;i<end;i++){
        sum_inner=sum_inner+*(nums+i);
    }
    return sum_inner;
}




int maximum_sum(int *nums,int length){
    int maximum=0;
    for (int start=0;start<length;start++){
        
        for (int end=start;end<length;end++){
            int potential_sum=0;
            for(int i=start;i<=end;i++){
                potential_sum+=*(nums+i);
            }
            if(maximum < potential_sum){
                maximum=potential_sum;
            }
        }
    }
    return maximum;
}

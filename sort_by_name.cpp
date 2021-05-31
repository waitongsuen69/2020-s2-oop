#include<iostream>
#include<string>
#include"sort_by_name.h"

using namespace std;

void sort_by_name::sort(animal **animals,int n){
    animal* temporary_pointer;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(animals[i]->get_name()>animals[j]->get_name()){
                temporary_pointer=animals[i];
                animals[i]=animals[j];
                animals[j]=temporary_pointer;
            }
        }
    }
}


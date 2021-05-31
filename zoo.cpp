#include<iostream>
#include<string>
#include"zoo.h"

zoo::zoo(){
    
}
zoo::~zoo(){
    
}
zoo::zoo(string n,int cows,int lions){
    name=n;
    animal* new_animal;
    number_of_animals=cows+lions;
    animals= new animal*[cows+lions];
    for(int i = 0; i<cows;i++){
        new_animal = new vegie("Daisy",100);
        animals[i]=new_animal;
    }
    for(int j=cows;j<cows+lions;j++){
        new_animal = new hunter("Clarence",50);
        animals[j]=new_animal;
    }
    
}     // create a zoo with the given number of cows and lions

string zoo::get_name(){
    return name;
}
int zoo::get_number_of_animals(){
    return number_of_animals;
}
animal** zoo::get_animals(){
    return animals;
}


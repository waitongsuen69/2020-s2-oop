#include<iostream>
#include"meerkat.h"

using namespace std;

meerkat::meerkat(int age, string name){
    Age = age;
    Name = name ;
}

meerkat::meerkat()
{
    
}


string meerkat::getName()
{
    return Name;
}

int meerkat::getAge()
{
    return Age;
}

void meerkat::setName(string meerName)
{
    Name = meerName;
}

void meerkat::setAge(int meerAge)
{
    Age = meerAge;
}

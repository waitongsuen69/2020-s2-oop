
#include <string>
#include <iostream>

using namespace std;

class Animal
{
public:
    void make_sound();
    Animal();

};

Animal::Animal(){
    
}

void Animal::make_sound()
{
    cout << " I make a generic animal sound" << endl;
}

class Panda : public Animal
{
public:
    Panda();
void  make_sound();
};

Panda::Panda(){
    
}
void Panda::make_sound()
{
    cout << "I make a panda sound" << endl;
}





int main(){
    Animal* a = new Animal();
    Animal* p1 = new Panda();
    Animal* p2 = new Panda();
    Panda* p3 = new Panda();

    a->make_sound();
    p1->make_sound();
    p2->make_sound();
    p3->make_sound();
}

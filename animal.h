#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

class animal {
public:
    animal();
    ~animal();
    animal(string n, int v) ;  // creates an animal with name n and body volume v.
    
    void set_name(string n);
    void set_volume(int v);
    
    
    int get_animalID();
    int get_volume();
    virtual string get_name()=0;
    
    // animals are allocated a unique ID on creation
protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body
    
};
#endif

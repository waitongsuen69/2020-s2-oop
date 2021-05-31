#include<iostream>
#include<string>
#include"Music_box.h"

int main(){
	Music_box A("A",30);
    std::string Name = A.get_song();
    int  len= A.get_width(); 
	std::cout<<Name<< " "<<len<<std::endl;
}
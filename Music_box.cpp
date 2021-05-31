#include<iostream>
#include<string> 
#include"Music_box.h"

Music_box::Music_box(){
    name = "null";
    length = 0;
}        // a default constructor 
Music_box::Music_box(std::string songname, int width){
	name = songname;
	length = width;

}// a constructor that takes the song and width as arguments
std::string Music_box::get_song(){
	return name;
} // returns the name of the song that the music box plays
int Music_box::get_width(){
	return length;
}    // returns the width in centimetres of the music box
Music_box::~Music_box(){

}       //A default destructor
#include<iostream>
#include"Shelf.h"
#include"Music_box.h"

Shelf::Shelf(){
	Music_box *newlist= new Music_box[10];
	max_width=50;
	music_num=0;
	current_width=0;
	Music_box *list=newlist;
}  // default constructor
Shelf::Shelf(int width){
	Music_box *newlist= new Music_box[10];
	music_num=0;
	current_width=0;
	Music_box *list=newlist;
	max_width=width;
}  // constructor for shelf with given width in centimetres

int Shelf::get_width(){
	return max_width;
}  // returns the width of the shelf in centimetres

// returns the number of Music boxes currently on the shelf
int Shelf::get_number_of_music_boxes(){
	return music_num;
} 

// returns a dynamic array of the music boxes currently on the shelf
Music_box* Shelf::get_contents(){
	return *list;
}


// returns true and adds music box to shelf if there is sufficient space
// otherwise returns false
bool Shelf::add_music_box(Music_box a_music_box){
	bool addper;
			std::cout<<current_width;
		std::cout<<std::endl<<max_width;
	if(max_width >= current_width + a_music_box.length){

		*list[music_num]=a_music_box;
		music_num+=1;
		addper=true;
		current_width+=a_music_box.length;
        
	}else {
		addper=false;
	}
	std::cout<<addper<<std::endl;
	return addper;
}
 
Shelf::~Shelf(){

}

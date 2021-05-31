#include<iostream>
#include<string>
#include"Shelf.h"
#include"Music_box.h"

using namespace std;

int main(){
     Music_box A("A",30);
     Music_box C("C",540);
     Music_box B("B",30);
     Music_box D("D",20);
     
     Shelf S(100);


     cout<<S.add_music_box(A)<<endl<<S.add_music_box(B)<<endl<<S.add_music_box(C)<<endl;
     cout<<S.get_number_of_music_boxes();
}
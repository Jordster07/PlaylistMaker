#include "playlist.h"
#include <iostream>

//Playlist Constructor
Playlist::Playlist(string name){
this->name=name;
}

//Playlist Destructor
Playlist::~Playlist() {
    for (Media* m : items) delete m;
}

//Adding Media to Playlist vector
void Playlist::addMedia(Media* media) {
    items.push_back(media);
}

//Playing all media
void Playlist::playAll(){
    std::cout << "Playlist: " << name << endl;
    for (Media* m : items) m->play();
}
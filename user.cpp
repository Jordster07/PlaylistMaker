#include "user.h"
#include <iostream>

//User Constructor
User::User(string username){
    this->username=username;
}

//User Destructor
User::~User() {
    for (Playlist* p : playlists) {
        delete p;
    }
}
//Adding playlist to User
void User::addPlaylist(Playlist* playlist) {
    playlists.push_back(playlist);
}


//Showing User's playlist
void User::showPlaylists(){
    std::cout << "User: " << username << "'s Playlists:" << std::endl;
    for (Playlist* p : playlists) {
        p->playAll();
    }
}

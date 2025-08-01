#include "user.h"
#include <iostream>

//User Constructor
User::User(string username){
    this->username=username;
}

//Adding playlist to User
void User::addPlaylist(const Playlist& p) {
    playlists.push_back(p);
}

//Showing User's playlist
void User::showPlaylists(){
    std::cout << "User: " << username << "'s Playlists:" << endl;
    for (Playlist& p : playlists) p.playAll();
}

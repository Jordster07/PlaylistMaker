#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
#include "playlist.h"
using namespace std;

class User {
private:
    string username;
    vector<Playlist> playlists;

public:
    User(string username);
    void addPlaylist(const Playlist& playlist);
    void showPlaylists();
};

#endif
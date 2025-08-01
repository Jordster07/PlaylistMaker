#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
#include "playlist.h"
using namespace std;

class User {
private:
    string username;
    std::vector<Playlist*> playlists;
public:
    void addPlaylist(Playlist* playlist);
    ~User();
    User(string username);
    void showPlaylists();
};

#endif
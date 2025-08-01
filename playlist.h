#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <vector>
#include <string>
#include "media.h"
using namespace std;

class Playlist {
private:
    string name;
    vector<Media*> items;

public:
    Playlist(string name);
    ~Playlist();
    void addMedia(Media* media);
    void playAll();
};

#endif
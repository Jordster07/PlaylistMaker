#ifndef SONG_H
#define SONG_H
#include "media.h"
using namespace std;

class Song : public Media {
private:
    string artist;

public:
    Song(string title, int duration, string artist);
    void play() override;
};

#endif
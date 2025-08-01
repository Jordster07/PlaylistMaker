#ifndef PODCAST_H
#define PODCAST_H
#include "media.h"
using namespace std;

class Podcast : public Media {
private:
    std::string host;

public:
    Podcast(string title, int duration, string host);
    void play() override;
};

#endif
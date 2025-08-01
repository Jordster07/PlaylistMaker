#ifndef MEDIA_H
#define MEDIA_H
#include <string>
#include <iostream>
using namespace std;

class Media {
protected:
    string title;
    int duration; 

public:
    Media(string title, int duration);
    virtual ~Media() {}
    virtual void play()= 0;
};

#endif
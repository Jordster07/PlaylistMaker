#include "song.h"

//Song Constructor using Media
Song::Song(string title, int duration, string artist) : Media(title, duration), artist(artist) {

}

//Overriding Play
void Song::play(){
    std::cout << "Playing song: " << title << " by " << artist << " (" << duration << "s)\n";
}
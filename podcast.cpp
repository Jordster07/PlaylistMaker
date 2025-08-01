#include "podcast.h"

//Podcast Constructor using Media
Podcast::Podcast(string title, int duration, string host) : Media(title, duration), host(host) {

}

//Overriding Play
void Podcast::play() {
    std::cout << "Playing podcast: " << title << " hosted by " << host << " (" << duration << "s)\n";
}
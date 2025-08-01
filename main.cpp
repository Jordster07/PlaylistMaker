#include "song.h"
#include "podcast.h"
#include "playlist.h"
#include "user.h"
#include <iostream>
using namespace std;

int main() {
    User user("Jordan");

    //making songs
    Playlist chill("YKTV");
    chill.addMedia(new Song("A New Kind of Love", 260, "Imogen Heap"));
    chill.addMedia(new Song("End Now I See You", 208, "Kaiyko"));

    //making podcasts
    Playlist LockIn("Lock in");
    LockIn.addMedia(new Podcast("Building Mental Resilience", 1500, "Michael Smoak"));
    LockIn.addMedia(new Podcast("Habit Stacking for Better Health", 1300, "Michael Smoak"));
    
    //adding the playlist and podcast to Jordan
    user.addPlaylist(chill);
    user.addPlaylist(LockIn);

    // Displaying playlists
    user.showPlaylists();

    return 0;
}

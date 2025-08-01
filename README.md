## PlaylistMaker

**PlaylistMaker** is a C++ program that models a simplified Spotify-like music and podcast system. It demonstrates object-oriented principles including inheritance, polymorphism, and aggregation.

---

##  Overview

Users can create playlists that contain songs and podcasts. These playlists are then associated with a user profile. Each media item is polymorphically managed through a common `Media` interface.

---

## Class Structure

### Inheritance
- `Media` (abstract base class)
  - `Song` (derived class)
  - `Podcast` (derived class)

### Aggregation
- `Playlist` contains a list of `Media*`
- `User` contains a list of `Playlist*`

### Polymorphism
- `Playlist` uses `Media*` to call `play()` on both `Song` and `Podcast` objects.

---

##  File Breakdown

- `media.h/cpp` – Abstract base class for all media
- `song.h/cpp` – Derived class representing a song
- `podcast.h/cpp` – Derived class representing a podcast
- `playlist.h/cpp` – Holds a collection of `Media*`
- `user.h/cpp` – Represents a user with multiple playlists
- `main.cpp` – Demonstrates creation and playback of media

---

## How to Compile and Run

In your terminal:

```bash
g++ -std=c++17 -Wall *.cpp -o PlaylistMaker
./PlaylistMaker

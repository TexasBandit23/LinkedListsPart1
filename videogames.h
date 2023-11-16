#ifndef VIDEOGAMEHEADER
#define VIDEOGAMEHEADER
#include <iostream>
#include "Media.h"
using namespace std;
//videogame class
//this class, like the music and movie classes inherit from the parent media class
class VideoGames : public Media {
public:
  virtual void print();
  virtual void addPublisherName(char*);
  virtual void addRating(float);
  ~VideoGames();
private:
  char * publisherName;
  float rating;
};
#endif

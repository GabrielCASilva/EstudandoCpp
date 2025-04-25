#ifndef __MOVIES__
#define __MOVIES__

#include "Movie.hpp"
#include <vector>
class Movies
{
  private:
    std::vector<Movie> movies;

  public:
    Movies();
    Movies(const Movies &source) = delete;
    Movies(Movies &&source) = delete;
    ~Movies();

    void add_movie(Movie &&movie);
    void increment_watched(int increment, std::string movie_name);
    void display() const;
};

#endif // !__MOVIES__

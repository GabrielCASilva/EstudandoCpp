
#include "Movies.hpp"
#include "Movie.hpp"

#include <iostream>

Movies::Movies()
{
}

Movies::~Movies()
{
}

void Movies::add_movie(Movie &&movie)
{
    movies.push_back(std::move(movie));
}

void Movies::increment_watched(int increment, std::string movie_name)
{
    bool found{false};
    for (auto &movie : movies)
    {
        if (movie.get_name() == movie_name)
        {
            found = true;
            std::cout << "incrementing...\n\n";
            movie.add_watched(increment);
            break;
        }
    }

    if (!found)
    {
        std::cout << "unable to increment, movie not found\n\n";
    }
}

void Movies::display() const
{
    if (!movies.empty())
    {
        std::cout << "[\n";
        for (auto movie : movies)
        {
            std::cout << "    { name: " << movie.get_name() << ", ";
            std::cout << "watched: " << movie.get_watch() << ", ";
            std::cout << "rating: " << Movie::rating_to_string(movie.get_rating()) << " },\n";
        }
        std::cout << "]\n\n";
    }
    else
    {
        std::cout << "list of movies is empty\n\n";
    }
}

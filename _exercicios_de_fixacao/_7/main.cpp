#include "Movie.hpp"
#include "Movies.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    Movies movies;

    movies.display();

    movies.add_movie(Movie{"Doutor estranho", Rating::PG, 3});
    movies.add_movie(Movie{"Feiticera escarlate", Rating::PG, 5});
    movies.add_movie(Movie{"SpiderMan", Rating::PG, 2});

    movies.display();

    movies.increment_watched(10, "Feiticera escarlate");

    movies.display();

    movies.increment_watched(10, "Ela");

    return 0;
}

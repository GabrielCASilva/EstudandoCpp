#ifndef __MOVIE__
#define __MOVIE__

#include <string>

enum class Rating
{
    G,
    PG,
    PG_13,
    R
};

class Movie
{
  private:
    std::string name;
    Rating rating;
    int watched;

  public:
    Movie() = default;

    Movie(const std::string &name, Rating rating, int watched) : name{name}, rating{rating}, watched{watched}
    {
    }

    Movie(const Movie &source) : name{source.name}, rating{source.rating}, watched{source.watched}
    {
    }

    Movie(Movie &&source) : name{std::move(source.name)}, rating{source.rating}, watched{source.watched}
    {
    }

    ~Movie() = default;

    std::string get_name() const
    {
        return name;
    }

    Rating get_rating() const
    {
        return rating;
    }

    int get_watch() const
    {
        return watched;
    }

    void add_watched(int num)
    {
        watched += num;
    }

    static std::string rating_to_string(Rating rating)
    {
        switch (rating)
        {
        case Rating::G:
            return "G";
        case Rating::PG:
            return "PG";
        case Rating::PG_13:
            return "PG-13";
        case Rating::R:
            return "R";
        default:
            return "Unknow";
        }
    }
};

#endif // !__MOVIE__

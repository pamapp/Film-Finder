//
//  film.hpp
//  filmRandom
//
//  Created by Alina Potapova on 03.06.2020.
//  Copyright © 2020 Pamapp. All rights reserved.
//

#ifndef film_hpp
#define film_hpp

#include <string>

class Film
{
public:
    Film();
    Film(const std::string& name, float rating, std::string& genre);
    ~Film() = default;
    std::string getName() const;
    float getRating() const;
    std::string getGenre() const;
    void setName(std::string name);
    void setRating(float rating);
    void setGenre(std::string genre);
    void show() const;
//    void split(std::string name);
    friend std::ofstream& operator<<(std::ofstream& out, const Film& film);
    
private:
    std::string name_;
    float rating_;
    std::string genre_;
};

#endif /* film_hpp */

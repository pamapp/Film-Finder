//
//  film.cpp
//  filmRandom
//
//  Created by Alina Potapova on 03.06.2020.
//  Copyright © 2020 Pamapp. All rights reserved.
//

#include <iostream>
#include "film.hpp"

Film::Film() :
  name_(""),
  rating_(0),
  genre_("")
{
}

Film::Film(const std::string& name, float rating, std::string& genre) :
  name_(name),
  rating_(rating),
  genre_(genre)
{
}

std::string Film::getName() const
{
    return name_;
}

float Film::getRating() const
{
    return rating_;
}

std::string Film::getGenre() const
{
    return genre_;
}

void Film::setName(std::string name)
{
    name_ = name;
}

void Film::setRating(float rating)
{
    rating_ = rating;
}

void Film::setGenre(std::string genre)
{
    genre_ = genre;
}

void Film::show() const
{
    std::cout << name_ << " " << rating_ << " " << genre_;
}

//void Film::split(std::string str)
//{
//    float rating;
//    unsigned int pointName = 0;
//    unsigned int pointRating = 0;
//    unsigned int pointGenre = 0;
//    std::cout << str.size() << '\n';
//    for (int i = 0 ; i < str.size(); ++i)
//    {
//        if (str[i] == '|' and pointName == 0)
//        {
//            pointName = i;
//            std::string title = str.substr(1, pointName - 2);
//            name_ = title;
//        }
//        if (str[i] == '|' and pointName != 0 and pointName != i and pointRating == 0)
//        {
//            pointRating = i;
//            std::string strRating = str.substr(pointName + 2, pointRating - 2);
//            rating = std::stod(strRating);
//            rating_ = rating;
//        }
//        if (str[i] == '|' and pointRating != 0 and pointRating != i and pointGenre == 0)
//        {
//            pointGenre = i;
//            std::string genre = str.substr(pointRating + 1, pointGenre - 1);
//            genre_ = genre;
//        }
//    }
//}

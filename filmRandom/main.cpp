//
//  main.cpp
//  filmRandom
//
//  Created by Alina Potapova on 03.06.2020.
//  Copyright © 2020 Pamapp. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "film.hpp"

const std::string fileError = "Файл не открыт!";

int main()
{
    Film* films = new Film [1000];
    
    std::string strName;
    std::ifstream fileInName;
    fileInName.open("fileFilms.txt");
    if (!fileInName.is_open())
    {
        throw fileError;
    }
    int i = 0;
    while (fileInName >> strName)
    {
        films[i].setName(strName);
        i++;
    }
    
    //==========================================================
    
    float rating;
    std::string strRating;
    std::ifstream fileInRating;
    fileInRating.open("fileRating.txt");
    if (!fileInRating.is_open())
    {
        throw fileError;
    }
    int j = 0;
    while (fileInRating >> strRating)
    {
        rating = std::stod(strRating);
        films[j].setRating(rating);
        j++;
    }
    fileInRating.close();
    
     //==========================================================
    
    std::string strGenre;

    std::ifstream fileInGenre;
    fileInGenre.open("fileGenre.txt");
    if (!fileInGenre.is_open())
    {
        throw fileError;
    }
    int k = 0;
    while (fileInGenre >> strGenre)
    {
        films[k].setGenre(strGenre);
        k++;
    }
    
     //==========================================================

    std::cout << "Список непросмотренных фильмов:\n" << "===============================\n";
    for (int i = 0; i < sizeof(films)/sizeof(int); i++)
    {
        std::cout << i + 1 << ") ";
        films[i].show();
        std::cout << '\n';
    }
    
    std::cout << "\nАлиночка, введи желаемый жанр:\n";
    std::cout << '\n';
    return 0;
}

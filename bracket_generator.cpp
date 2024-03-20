//
// Created by Natalie Dettmer on 3/19/24.
//

#include "bracket_generator.hpp"
#include <iostream>


// Team constructor
Team::Team(int seed, std::string teamName, int zipDigits, int pantoneColor) :
    seed(seed), teamName(teamName), zipDigits(zipDigits), pantoneColor(pantoneColor){}





    // Random
    // Team with lowest last three digits of zip code
    // Team with highest last two digits of primary Pantone color
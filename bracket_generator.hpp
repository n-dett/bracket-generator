//
// Created by Natalie Dettmer on 3/19/24.
//

#ifndef FINAL_PROJECT_BRACKET_GENERATOR_HPP
#define FINAL_PROJECT_BRACKET_GENERATOR_HPP

#include <iostream>

class Team {
private:
    int zipDigits;
    int pantoneColor;

public:
    int seed;
    std::string teamName;

    Team(){};
    Team(int seed, std::string teamName, int zipDigits, int pantoneColor);

};



#endif //FINAL_PROJECT_BRACKET_GENERATOR_HPP

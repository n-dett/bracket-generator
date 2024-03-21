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

    // Constructors
    Team(){};
    Team(int seed, std::string teamName, int zipDigits, int pantoneColor);

    // Getters
    int getZip() const{return zipDigits;}
    int getPantone() const{return pantoneColor;}
    int getSeed()const{return seed;}
    std::string getName()const{return teamName;}

    // Setters
    void setZip(int zipDigits){this->zipDigits = zipDigits;}
    void setPantone(int pantoneColor){this->pantoneColor = pantoneColor;}
    void setSeed(int seed){this->seed = seed;}
    void getName(std::string teamName ){this->teamName = teamName;}

    // Choose random winners
    static void randomWinner
    (Team const * const roundArr1, Team * const roundArr2,Team * const nextRoundArr);

    static void randomWinner(Team const * const roundArr, Team * nextRoundArr, const int teamsCount);
    static Team chooseRandom(const Team & team1, const Team & team2);
    static void zipCodeWinner(Team const * const roundArr, Team * const nextRoundArr, int teamsCount);
    static Team chooseZipCode(const Team & team1, const Team & team2);
    static void pantoneWinner(Team const * const roundArr, Team * const nextRoundArr, int teamsCount);
    static Team choosePantone(const Team & team1, const Team & team2);
    static void displayRoundWinners(Team const * const roundArr, int roundArrLength, const std::string &roundName);
    static void displayFinalFour(Team const * const roundArr, int index, const std::string &roundName);





    // Overloaded =
    // overloaded assignment operator
//    Team & operator=(const Team & rhs)
//    {
//        // copy the contents of the location pointed to by value
//        (this->zipDigits) = rhs.zipDigits;
//        (this->pantoneColor) = rhs.pantoneColor;
//        (this->seed) = rhs.seed;
//        (this->teamName) = rhs.teamName;
//
//
//        // return our address
//        return *this;
//    }


};


#endif //FINAL_PROJECT_BRACKET_GENERATOR_HPP

//
// Created by Natalie Dettmer on 3/19/24.
//

#include "bracket_generator.hpp"
#include <iostream>



// Team constructor
Team::Team(int seed, std::string teamName, int zipDigits, int pantoneColor) :
    seed(seed), teamName(teamName), zipDigits(zipDigits), pantoneColor(pantoneColor){}


// Choose random game winners
Team Team::randomWinner(Team const * const roundArr, Team * const nextRoundArr, int teamsCount)
{

    int nextRoundIndex = 0;
    int teamIndex = 0;

    // Number of games for which to determine winner
    int gamesCount = teamsCount/2;

    Team winner;

    for(int i=0; i<gamesCount; i++) {

        // Team 1 plays Team 16, Team 2 plays Team 15, etc.
        Team team1 = roundArr[teamIndex];
        Team team2 = roundArr[teamsCount-1];

        // Randomly pick winner
        winner = chooseRandom(team1, team2);

        // Add winner to next round array
        nextRoundArr[nextRoundIndex] = winner;

        nextRoundIndex++;    // Move to next element in resulting array
        teamIndex++;         // Move to next element to get first team of next game
        teamsCount--;        // Move backward from end of array to get second team

    }
}


// Choose random winner of one game
Team chooseRandom(Team team1, Team team2)
{
    Team winner;
    // Get random number
    int randNum = rand() % 2;

    if (randNum == 0) {
        winner = team1;
    } else {
        winner = team2;
    }

    return winner;
}



// Choose game winners based on the team with the lowest last three digits of zip code
Team Team::zipCodeWinner(Team const * const roundArr, Team * const nextRoundArr, int teamsCount)
{
    int nextRoundIndex = 0;
    int teamIndex = 0;

    // Number of games for which to determine winner
    int gamesCount = teamsCount/2;

    Team winner;

    for(int i=0; i<gamesCount; i++) {

        // Team 1 plays Team 16, Team 2 plays Team 15, etc.
        Team team1 = roundArr[teamIndex];
        Team team2 = roundArr[teamsCount-1];

        // Randomly pick winner
        winner = chooseRandom(team1, team2);

        // Add winner to next round array
        nextRoundArr[nextRoundIndex] = winner;

        nextRoundIndex++;    // Move to next element in resulting array
        teamIndex++;         // Move to next element to get first team of next game
        teamsCount--;        // Move backward from end of array to get second team

    }
}







    // Random
    // Team with lowest last three digits of zip code
    // Team with highest last two digits of primary Pantone color
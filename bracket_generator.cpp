//
// Created by Natalie Dettmer on 3/19/24.
//

#include "bracket_generator.hpp"
#include <iostream>
#include <iomanip>



// Team constructor
Team::Team(int seed, std::string teamName, int zipDigits, int pantoneColor) :
    seed(seed), teamName(teamName), zipDigits(zipDigits), pantoneColor(pantoneColor){}


// Choose random game winners for final four and championship
void Team::randomWinner(Team const * const roundArr1, Team * const roundArr2, Team * const nextRoundArr)
{
    Team winner;
    Team team1 = roundArr1[0];
    Team team2 = roundArr2[0];

    // Randomly pick winner
    winner = chooseRandom(team1, team2);

    // Add winner to next round array
    nextRoundArr[0] = winner;
}

// Choose random game winners and fill next array
void Team::randomWinner(Team const * const roundArr, Team * const nextRoundArr, int teamsCount)
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

        displayGame(team1, team2, winner);

        nextRoundIndex++;    // Move to next element in resulting array
        teamIndex++;         // Move to next element to get first team of next game
        teamsCount--;        // Move backward from end of array to get second team

    }

    std::cout << std::endl;
}


// Choose random winner of one game
Team Team::chooseRandom(const Team & team1, const Team & team2)
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







// Choose game winners based on the team with the lowest last three digits of zip code; fill next array
void Team::zipCodeWinner(Team const * const roundArr, Team * const nextRoundArr, int teamsCount)
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

        // Determine winner
        winner = chooseZipCode(team1, team2);

        // Add winner to next round array
        nextRoundArr[nextRoundIndex] = winner;

        displayGame(team1, team2, winner);

        nextRoundIndex++;    // Move to next element in resulting array
        teamIndex++;         // Move to next element to get first team of next game
        teamsCount--;        // Move backward from end of array to get second team

    }

    std::cout << std::endl;
}


// Lowest 3 digits of zip wins; fill next array
Team Team::chooseZipCode(const Team & team1, const Team & team2)
{
    Team winner;
    if(team1.getZip() < team2.getZip())
    {
        winner = team1;
    } else if(team2.getZip() < team1.getZip())
    {
        winner = team2;
    } else
    {
        winner = chooseRandom(team1, team2);
    }

    return winner;
}


// Choose game winners based on the team with the lowest last three digits of zip code
void Team::pantoneWinner(Team const * const roundArr, Team * const nextRoundArr, int teamsCount)
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

        // Determine winner
        winner = choosePantone(team1, team2);

        // Add winner to next round array
        nextRoundArr[nextRoundIndex] = winner;

        displayGame(team1, team2, winner);

        nextRoundIndex++;    // Move to next element in resulting array
        teamIndex++;         // Move to next element to get first team of next game
        teamsCount--;        // Move backward from end of array to get second team

    }

    std::cout << std::endl;
}


// Highest last two digits of primary Pantone color wins
Team Team::choosePantone(const Team & team1, const Team & team2)
{
    Team winner;
    if(team1.getPantone() > team2.getPantone())
    {
        winner = team1;
    } else if(team2.getPantone() > team1.getPantone())
    {
        winner = team2;
    } else
    {
        winner = chooseRandom(team1, team2);
    }

    return winner;
}


void Team::displayGame(const Team & team1, const Team & team2, const Team & winner)
{
    std::cout << std::left << std::setw(2) << team1.getSeed() << " " << std::setw(16) << team1.getName() << " vs. " <<
    std::setw(2) << team2.getSeed() << " " << std::setw(16) << team2.getName() <<
    " -----> " << std::setw(2) << winner.getSeed() << " " << std::setw(20) <<
    winner.getName() << std::endl;
}




    // Random
    // Team with lowest last three digits of zip code
    // Team with highest last two digits of primary Pantone color
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bracket_generator.hpp"

int main() {

    // Generate random seed for pantoneWinner
    unsigned int seed = static_cast<unsigned int>(time(nullptr));
    srand(seed);

    int criteria = 1;

    // Intro
    std::cout << "Welcome to March Madness Bracket Generator" << std::endl;
    std::cout << "This program will allow you to generate winner picks for your bracket based on the "
                 "criteria you choose." << std::endl;
    std::cout << "If a matchup results in a tie, a random winner will be chosen." << std::endl << std::endl;

    // Get user criteria selection



    // East Region
    Team eastArr[16];

    Team uConn(1, "UConn", 269, 89);
    eastArr[0] = uConn;

    Team iowaSt(2, "Iowa St.", 10, 86);
    eastArr[1] = iowaSt;

    Team illinois(3, "Illinois", 820, 55);
    eastArr[2] = illinois;

    Team auburn(4, "Auburn", 849, 89);
    eastArr[3] = auburn;

    Team sanDiegoSt(5, "San Diego St.", 115, 85);
    eastArr[4] = sanDiegoSt;

    Team byu(6, "BYU", 604, 48);
    eastArr[5] = byu;

    Team washingtonSt(7, "Washington St.", 163, 1);
    eastArr[6] = washingtonSt;

    Team fau(8, "FAU", 431, 95);
    eastArr[7] = fau;

    Team northwestern(9, "Northwestern", 201, 68);
    eastArr[8] = northwestern;

    Team drake(10, "Drake", 311, 45);
    eastArr[9] = drake;

    Team duquesne(11, "Duquesne", 282, 80);
    eastArr[10] = duquesne;

    Team uab(12, "UAB", 233, 25);
    eastArr[11] = uab;

    Team yale(13, "Yale", 511, 48);
    eastArr[12] = yale;

    Team moreheadSt(14, "Morehead St.", 351, 86);
    eastArr[13] = moreheadSt;

    Team southDakotaSt(15, "South Dakota St.", 7, 9);
    eastArr[14] = southDakotaSt;

    Team stetson(16, "Stetson", 723, 63);
    eastArr[15] = stetson;


    // West Region
    Team westArr[16];

    Team northCarolina(1, "North Carolina", 514, 42);
    westArr[0] = northCarolina;

    Team arizona(2, "Arizona", 721, 0);
    westArr[1] = arizona;

    Team baylor(3, "Baylor", 701, 35);
    westArr[2] = baylor;

    Team alabama(4, "Alabama", 401, 1);
    westArr[3] = alabama;

    Team stMarys(5, "Saint Mary's", 575, 34);
    westArr[4] = stMarys;

    Team clemson(6, "Clemson", 631, 52);
    westArr[5] = clemson;

    Team dayton(7, "Dayton", 417, 66);
    westArr[6] = dayton;

    Team mississippiSt(8, "Mississippi St.", 762, 5);
    westArr[7] = mississippiSt;

    Team michiganSt(9, "Michigan St.", 824, 67);
    westArr[8] =  michiganSt;

    Team nevada(10, "Nevada", 557, 82);
    westArr[9] = nevada;

    Team newMexico(11, "New Mexico", 106, 0);
    westArr[10] = newMexico;

    Team grandCanyon(12, "Grand Canyon", 17, 67);
    westArr[11] = grandCanyon;

    Team charleston(13, "Charleston", 401, 88);
    westArr[12] = charleston;

    Team colgate(14, "Colgate", 511, 2);
    westArr[13] = colgate;

    Team longBeachSt(15, "Long Beach St.", 840, 24);
    westArr[14] = longBeachSt;

    Team wagner(16, "Wagner", 301, 53);
    westArr[15] = wagner;



    // South Region
    Team southArr[16];

    Team houston(1, "Houston", 4, 86);
    southArr[0] = houston;

    Team marquette(2, "Marquette", 203, 81);
    southArr[1] = marquette;

    Team kentucky(3, "Kentucky", 506, 86);
    southArr[2] = kentucky;

    Team duke(4, "Duke", 708, 80);
    southArr[3] = duke;

    Team wisconsin(5, "Wisconsin", 703, 0);
    southArr[4] = wisconsin;

    Team texasTech(6, "Texas Tech", 409, 85);
    southArr[5] = texasTech;

    Team florida(7, "Florida", 611, 72);
    southArr[6] = florida;

    Team nebraska(8, "Nebraska", 508, 86);
    southArr[7] = nebraska;

    Team texasAM(9, "Texas A&M", 843, 21);
    southArr[8] = texasAM;

    Team colorado(10, "Colorado", 309, 25);
    southArr[9] = colorado;

    Team ncState(11, "NC State", 607, 86);
    southArr[10] = ncState;

    Team jamesMadison(12, "James Madison", 801, 85);
    southArr[11] = jamesMadison;

    Team vermont(13, "Vermont", 405, 84);
    southArr[12] = vermont;

    Team oakland(14, "Oakland", 309, 65);
    southArr[13] = oakland;

    Team westernKy(15, "Western Ky.", 101, 86);
    southArr[14] = westernKy;

    Team longwood(16, "Longwood", 909, 82);
    southArr[15] = longwood;



    // Midwest Region
    Team midwestArr[16];

    Team purdue(1, "Purdue", 907, 2);
    midwestArr[0] = purdue;

    Team tennessee(2, "Tennessee", 916, 51);
    midwestArr[1] = tennessee;

    Team creighton(3, "Creighton", 102, 86);
    midwestArr[2] = creighton;

    Team kansas(4, "Kansas", 44, 93);
    midwestArr[3] = kansas;

    Team gonzaga(5, "Gonzaga", 258, 82);
    midwestArr[4] = gonzaga;

    Team southCarolina(6, "South Carolina", 208, 2);
    midwestArr[5] = southCarolina;

    Team texas(7, "Texas", 712, 59);
    midwestArr[6] = texas;

    Team utahSt(8, "Utah St.", 322, 39);
    midwestArr[7] = utahSt;

    Team tcu(9, "TCU", 109, 68);
    midwestArr[8] = tcu;

    Team coloradoSt(10, "Colorado St.", 521, 57);
    midwestArr[9] = coloradoSt;


    Team oregon(11, "Oregon", 401, 56);
    midwestArr[10] = oregon;

    Team mcneeseState(12, "McNeese State", 607, 87);
    midwestArr[11] = mcneeseState;

    Team samford(13, "Samford", 209, 89);
    midwestArr[12] = samford;

    Team akron(14, "Akron", 303, 82);
    midwestArr[13] = akron;

    Team saintPeters(15, "Saint Peter's", 306, 41);
    midwestArr[14] = saintPeters;

    Team gramblingSt(16, "Grambling St.", 245, 24);
    midwestArr[15] = gramblingSt;



// Round of 64

    // Arrays for round of 64 winners
    Team east64Arr[8];
    Team west64Arr[8];
    Team south64Arr[8];
    Team midwest64Arr[8];

    sectionHeading("Round of 64");

    // Choose and fill round of 64 winners

    if(criteria == 3) {
        std::cout << "East" << std::endl;
        Team::pantoneWinner(eastArr, east64Arr, 16);
        std::cout << "West" << std::endl;
        Team::pantoneWinner(westArr, west64Arr, 16);
        std::cout << "South" << std::endl;
        Team::pantoneWinner(southArr, south64Arr, 16);
        std::cout << "Midwest" << std::endl;
        Team::pantoneWinner(midwestArr, midwest64Arr, 16);
    } else if (criteria == 2)
    {
        std::cout << "East" << std::endl;
        Team::zipCodeWinner(eastArr, east64Arr, 16);
        std::cout << "West" << std::endl;
        Team::zipCodeWinner(westArr, west64Arr, 16);
        std::cout << "South" << std::endl;
        Team::zipCodeWinner(southArr, south64Arr, 16);
        std::cout << "Midwest" << std::endl;
        Team::zipCodeWinner(midwestArr, midwest64Arr, 16);
    } else
    {
        std::cout << "East" << std::endl;
        Team::randomWinner(eastArr, east64Arr, 16);
        std::cout << "West" << std::endl;
        Team::randomWinner(westArr, west64Arr, 16);
        std::cout << "South" << std::endl;
        Team::randomWinner(southArr, south64Arr, 16);
        std::cout << "Midwest" << std::endl;
        Team::randomWinner(midwestArr, midwest64Arr, 16);
    }



    std::cout << std::endl;




// Round of 32

    // Round of 32 winners
    Team east32Arr[4];
    Team west32Arr[4];
    Team south32Arr[4];
    Team midwest32Arr[4];

    sectionHeading("Round of 32");

    // Choose and fill round of 32 winners

    if(criteria == 3) {
        std::cout << "East" << std::endl;
        Team::pantoneWinner(east64Arr, east32Arr, 8);
        std::cout << "West" << std::endl;
        Team::pantoneWinner(west64Arr, west32Arr, 8);
        std::cout << "South" << std::endl;
        Team::pantoneWinner(south64Arr, south32Arr, 8);
        std::cout << "Midwest" << std::endl;
        Team::pantoneWinner(midwest64Arr, midwest32Arr, 8);
    } else if (criteria == 2)
    {
        std::cout << "East" << std::endl;
        Team::zipCodeWinner(east64Arr, east32Arr, 8);
        std::cout << "West" << std::endl;
        Team::zipCodeWinner(west64Arr, west32Arr, 8);
        std::cout << "South" << std::endl;
        Team::zipCodeWinner(south64Arr, south32Arr, 8);
        std::cout << "Midwest" << std::endl;
        Team::zipCodeWinner(midwest64Arr, midwest32Arr, 8);
    } else
    {
        std::cout << "East" << std::endl;
        Team::randomWinner(east64Arr, east32Arr, 8);
        std::cout << "West" << std::endl;
        Team::randomWinner(west64Arr, west32Arr, 8);
        std::cout << "South" << std::endl;
        Team::randomWinner(south64Arr, south32Arr, 8);
        std::cout << "Midwest" << std::endl;
        Team::randomWinner(midwest64Arr, midwest32Arr, 8);
    }

    std::cout << std::endl;




 // Sweet Sixteen

    // Sweet Sixteen winners
    Team east16Arr[2];
    Team west16Arr[2];
    Team south16Arr[2];
    Team midwest16Arr[2];

    sectionHeading("Sweet Sixteen");

    // Choose and fill Sweet Sixteen winners

    if(criteria == 3) {
        std::cout << "East" << std::endl;
        Team::pantoneWinner(east32Arr, east16Arr, 4);
        std::cout << "West" << std::endl;
        Team::pantoneWinner(west32Arr, west16Arr, 4);
        std::cout << "South" << std::endl;
        Team::pantoneWinner(south32Arr, south16Arr, 4);
        std::cout << "Midwest" << std::endl;
        Team::pantoneWinner(midwest32Arr, midwest16Arr, 4);
    } else if (criteria == 2)
    {
        std::cout << "East" << std::endl;
        Team::zipCodeWinner(east32Arr, east16Arr, 4);
        std::cout << "West" << std::endl;
        Team::zipCodeWinner(west32Arr, west16Arr, 4);
        std::cout << "South" << std::endl;
        Team::zipCodeWinner(south32Arr, south16Arr, 4);
        std::cout << "Midwest" << std::endl;
        Team::zipCodeWinner(midwest32Arr, midwest16Arr, 4);
    } else
    {
        std::cout << "East" << std::endl;
        Team::randomWinner(east32Arr, east16Arr, 4);
        std::cout << "West" << std::endl;
        Team::randomWinner(west32Arr, west16Arr, 4);
        std::cout << "South" << std::endl;
        Team::randomWinner(south32Arr, south16Arr, 4);
        std::cout << "Midwest" << std::endl;
        Team::randomWinner(midwest32Arr, midwest16Arr, 4);
    }

    std::cout << std::endl;




// Elite Eight

    // Elite Eight winners
    Team east8Arr[1];
    Team west8Arr[1];
    Team south8Arr[1];
    Team midwest8Arr[1];

    sectionHeading("Elite Eight");

    // Choose and fill Elite Eight winners

    if(criteria == 3) {
        std::cout << "East" << std::endl;
        Team::pantoneWinner(east16Arr, east8Arr, 2);
        std::cout << "West" << std::endl;
        Team::pantoneWinner(west16Arr, west8Arr, 2);
        std::cout << "South" << std::endl;
        Team::pantoneWinner(south16Arr, south8Arr, 2);
        std::cout << "Midwest" << std::endl;
        Team::pantoneWinner(midwest16Arr, midwest8Arr, 2);
    } else if (criteria == 2)
    {
        std::cout << "East" << std::endl;
        Team::zipCodeWinner(east16Arr, east8Arr, 2);
        std::cout << "West" << std::endl;
        Team::zipCodeWinner(west16Arr, west8Arr, 2);
        std::cout << "South" << std::endl;
        Team::zipCodeWinner(south16Arr, south8Arr, 2);
        std::cout << "Midwest" << std::endl;
        Team::zipCodeWinner(midwest16Arr, midwest8Arr, 2);
    } else
    {
        std::cout << "East" << std::endl;
        Team::randomWinner(east16Arr, east8Arr, 2);
        std::cout << "West" << std::endl;
        Team::randomWinner(west16Arr, west8Arr, 2);
        std::cout << "South" << std::endl;
        Team::randomWinner(south16Arr, south8Arr, 2);
        std::cout << "Midwest" << std::endl;
        Team::randomWinner(midwest16Arr, midwest8Arr, 2);
    }

    std::cout << std::endl;




// Final Four

    // Final Four winners
    Team finalFourArr1[1];
    Team finalFourArr2[1];

    sectionHeading("Final Four");

    // Choose and fill Final Four winners

    if(criteria == 3) {
        // East vs. West winner
        Team::pantoneWinner(east8Arr, west8Arr, finalFourArr1);
        // South vs. Midwest winner
        Team::pantoneWinner(south8Arr, midwest8Arr, finalFourArr2);
    } else if (criteria == 2)
    {
        // East vs. West winner
        Team::zipCodeWinner(east8Arr, west8Arr, finalFourArr1);
        // South vs. Midwest winner
        Team::zipCodeWinner(south8Arr, midwest8Arr, finalFourArr2);
    } else
    {
        // East vs. West winner
        Team::randomWinner(east8Arr, west8Arr, finalFourArr1);
        // South vs. Midwest winner
        Team::randomWinner(south8Arr, midwest8Arr, finalFourArr2);
    }

    std::cout << std::endl << std::endl;


// Championship

    // Choose and fill National Champion
    Team nationalChampion[1];

    sectionHeading("National Championship");

    if(criteria == 3) {
        Team::pantoneWinner(finalFourArr1, finalFourArr2, nationalChampion);

    } else if (criteria == 2)
    {
        Team::zipCodeWinner(finalFourArr1, finalFourArr2, nationalChampion);

    } else
    {
        Team::randomWinner(finalFourArr1, finalFourArr2, nationalChampion);
    }

    return 0;
}


// Random
// Team with lowest last three digits of zip code
// Team with highest last two digits of primary Pantone color
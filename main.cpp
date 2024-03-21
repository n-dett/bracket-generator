#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bracket_generator.hpp"

int main() {

    // Generate random seed for randomWinner
    unsigned int seed = static_cast<unsigned int>(time(nullptr));
    srand(seed);



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

    Team tbd1(10, "TBD 1", 0, 0);
    southArr[9] = tbd1;

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

    Team coloradoSt(9, "Colorado St.", 521, 57);
    midwestArr[8] = coloradoSt;

    Team tcu(10, "TCU", 109, 68);
    midwestArr[9] = tcu;

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

    Team tbd2(16, "TBD 2", 0, 0);
    midwestArr[15] = tbd2;



// Round of 64

    // Arrays for round of 64 winners
    Team east64Arr[8];
    Team west64Arr[8];
    Team south64Arr[8];
    Team midwest64Arr[8];

    // Choose and fill round of 64 winners
    Team::randomWinner(eastArr, east64Arr, 16);
    Team::randomWinner(westArr, west64Arr, 16);
    Team::randomWinner(southArr, south64Arr, 16);
    Team::randomWinner(midwestArr, midwest64Arr, 16);

    // Display round of 64 winners
    Team::displayRoundWinners(eastArr, 8, "East Region Round of 64 Winners:");
    Team::displayRoundWinners(westArr, 8, "West Region Round of 64 Winners:");
    Team::displayRoundWinners(southArr, 8, "South Region Round of 64 Winners:");
    Team::displayRoundWinners(midwestArr, 8, "Midwest Region Round of 64 Winners:");


// Round of 32

    // Round of 32 winners
    Team east32Arr[4];
    Team west32Arr[4];
    Team south32Arr[4];
    Team midwest32Arr[4];

    // Choose and fill round of 32 winners
    Team::randomWinner(east64Arr, east32Arr, 8);
    Team::randomWinner(west64Arr, west32Arr, 8);
    Team::randomWinner(south64Arr, south32Arr, 8);
    Team::randomWinner(midwest64Arr, midwest32Arr, 8);

    // Display round of 32 winners
    Team::displayRoundWinners(east32Arr, 4, "East Region Round of 32 Winners:");
    Team::displayRoundWinners(west32Arr, 4, "West Region Round of 32 Winners:");
    Team::displayRoundWinners(south32Arr, 4, "South Region Round of 32 Winners:");
    Team::displayRoundWinners(midwest32Arr, 4, "Midwest Region Round of 32 Winners:");


 // Sweet Sixteen

    // Sweet Sixteen winners
    Team east16Arr[2];
    Team west16Arr[2];
    Team south16Arr[2];
    Team midwest16Arr[2];

    // Choose and fill Sweet Sixteen winners
    Team::randomWinner(east32Arr, east16Arr, 4);
    Team::randomWinner(west32Arr, west16Arr, 4);
    Team::randomWinner(south32Arr, south16Arr, 4);
    Team::randomWinner(midwest32Arr, midwest16Arr, 4);

    // Display Sweet Sixteen winners
    Team::displayRoundWinners(east16Arr, 2, "East Region Sweet Sixteen Winners:");
    Team::displayRoundWinners(west16Arr, 2, "West Region Sweet Sixteen Winners:");
    Team::displayRoundWinners(south16Arr, 2, "South Region Sweet Sixteen Winners:");
    Team::displayRoundWinners(midwest16Arr, 2, "Midwest Region Sweet SixteenWinners");



// Elite Eight

    // Elite Eight winners
    Team east8Arr[1];
    Team west8Arr[1];
    Team south8Arr[1];
    Team midwest8Arr[1];

    // Choose and fill Elite Eight winners
    Team::randomWinner(east16Arr, east8Arr, 2);
    Team::randomWinner(west16Arr, west8Arr, 2);
    Team::randomWinner(south16Arr, south8Arr, 2);
    Team::randomWinner(midwest16Arr, midwest8Arr, 2);

    // Display Elite Eight winners
    Team::displayRoundWinners(east8Arr, 1, "East Region Elite Eight Winner");
    Team::displayRoundWinners(west8Arr, 1, "West Region Elite Eight Winner");
    Team::displayRoundWinners(south8Arr, 1, "South Region Elite Eight Winner");
    Team::displayRoundWinners(midwest8Arr, 1, "Midwest Region Elite Eight Winner");



// Final Four

    // Final Four winners
    Team finalFourArr1[1];
    Team finalFourArr2[1];

    // Choose and fill Elite Eight winners
    // East vs. West winner
    Team::randomWinner(east8Arr, west8Arr, finalFourArr1, 0);
    // South vs. Midwest winner
    Team::randomWinner(south8Arr, midwest8Arr, finalFourArr2, 1);

    // Display Final Four winners
    Team::displayRoundWinners(finalFourArr1, 1, "East vs. West Final Four Winner:");
    Team::displayRoundWinners(finalFourArr2, 1, "South vs. Midwest Final Four Winner:");

// Championship

    // Choose and fill Elite Eight winners
    Team nationalChampion[1];
    Team::randomWinner(finalFourArr1, finalFourArr2, nationalChampion, 0);

    // Display National Champion
    Team::displayRoundWinners(nationalChampion, 1, "National Champion:");


    return 0;
}


// Random
// Team with lowest last three digits of zip code
// Team with highest last two digits of primary Pantone color
#include <iostream>
#include "bracket_generator.hpp"

int main() {
    const int regionSize = 16;


    // East Region
    Team eastArr[regionSize];

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
    Team westArr[regionSize];

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
    Team southArr[regionSize];

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
    Team midwestArr[regionSize];

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





    return 0;
}


// Random
// Team with lowest last three digits of zip code
// Team with highest last two digits of primary Pantone color
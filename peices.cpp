#include <iostream>
#include <string>
#include <vector>

#include "peices.h"

using namespace std;

genPeice::genPeice(const char[3]) {fName = "  ";}

genPeice::genPeice() {//I chose 0 so it would be easy to identify in the case of an error

    setName('0');
    setColor('0');
}

//The genPeice (Parent) class' constructor takes care of the repeated operations at initialization
genPeice::genPeice(string fn, int x) {
    setFName(fn);
    setX(x); //The X values are not known and have to be manually set
}

//Moves a peice to a given location
void genPeice::peiceMove(genPeice (*b)[8][8], int y1, int x1, int y2, int x2) {

    //if ((*b)[y1][x1].validMove((*b)[8][8], y1, x1, y2, x2))
    //The move part
    (*b)[y2][x2] = (*b)[y1][x1];
    (*b)[y1][x1] = "  ";

    //Updating the location
    (*b)[y2][x2].setY(y2);
    (*b)[y2][x2].setX(x2);
}

//Custom operations specific to each class
//Rooks
rookPeice::rookPeice(string fn, int x) : genPeice(fn, x) {
    if (getColor() == 'b') {setY(1);} else {setY(8);} //The Y values are known depending on the color
}

void rookPeice::validMove(genPeice b[8][8], int y1, int x1, int y2, int x2) {
//Makes temp pointer and assigns to where rook is
//Iterates through board like a rook
//  - Goes up, then down, left, and right
//Adds valid spots to vector
//Checks if the second coordinates are in their
//Then calls approprite function or says no luck
//-----------------------------------------------

    genPeice &tempPtr = b[y1][x1];

    //Looking up
    while (b[y1+1][x1].getFName() == "  ") {

        
    }
}

//Pawns
pawnPeice::pawnPeice(string fn, int x) : genPeice(fn, x) {
    if (getColor() == 'b') {setY(2);} else {setY(7);}
}

//Knights
knightPeice::knightPeice(string fn, int x) : genPeice(fn, x) {
    if (getColor() == 'b') {setY(1);} else {setY(8);}
}

//Bishops
bishopPeice::bishopPeice(string fn, int x) : genPeice(fn, x) {
    if (getColor() == 'b') {setY(1);} else {setY(8);}
}

//Queen
queenPeice::queenPeice(string fn, int x) : genPeice(fn, x) {
    if (getColor() == 'b') {setY(1);} else {setY(8);}
}

//King
kingPeice::kingPeice(string fn, int x) : genPeice(fn, x) {
    if (getColor() == 'b') {setY(1);} else {setY(8);}
}
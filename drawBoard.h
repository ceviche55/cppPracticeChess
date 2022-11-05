#ifndef DRAWBOARD_H
#define DRAWBOARD_H

#include <iostream>
#include <string>
#include "peices.h"
using namespace std;

//Function to convert Letters to array location
int letterToNum(char c) {

    int choice = -1;

    switch (c) {
        case 'A':
        case 'a':
            choice = 0;
            break;
        case 'B':
        case 'b':
            choice = 1;
            break;
        case 'C':
        case 'c':
            choice = 2;
            break;
        case 'D':
        case 'd':
            choice = 3;
            break;
        case 'E':
        case 'e':
            choice = 4;
            break;
        case 'F':
        case 'f':
            choice = 5;
            break;
        case 'G':
        case 'g':
            choice = 6;
            break;
        case 'H':
        case 'h':
            choice = 7;
            break;
        default:
            cout << "\nSorry but that IS NOT VALID!!\n";
            break;
    }

    return choice;
}

//Overloading the << operator so that I can have the board store the objects and have it automatically output the Fname so that I can be more dynamic with the objects on the board
ostream& operator<<(ostream& os, const genPeice& pp) {

    os << pp.getFName();
    return os;
}

/* ostream& operator<<(ostream& os, const rookPeice& pp) {

    os << pp.getFName();
    return os;
}

ostream& operator<<(ostream& os, const pawnPeice& pp) {

    os << pp.getFName();
    return os;
}

ostream& operator<<(ostream& os, const knightPeice& pp) {

    os << pp.getFName();
    return os;
}

ostream& operator<<(ostream& os, const bishopPeice& pp) {

    os << pp.getFName();
    return os;
}

ostream& operator<<(ostream& os, const queenPeice& pp) {

    os << pp.getFName();
    return os;
}

ostream& operator<<(ostream& os, const kingPeice& pp) {

    os << pp.getFName();
    return os;
} */

//Function to draw the board

void drawBoard(genPeice b[8][8]) {

    char aGrid = 'A';//Initialize at A then gets added to move through the alphabet and reset each time

    cout << "\n\n-------------------------------------------------\n"; //To help seperate the turns

    cout << "First Character:\n"; // Explainer on the name convection

    cout << "b = Black Peice\tw = White Peice\n";

    cout << "\nSecond Character:\n";

    cout << "p = Pawn\tr = Rook\tk = Knight\nb = Bishop\tq = Queen\tK = King\n";

    cout << endl << "    ";

    for (int i = 0; i < 8; i++) { //Names the column by letters
        cout << aGrid << "  ";
        aGrid++;
    }

    cout << endl << "    ";

    for (int i = 0; i < 24; i++) {cout << "-";} //To help see the edge of the board

    cout << endl;

    for (int y = 0; y < 8; y++) { //Outputs the edge and iterates thruogh the 2d array
        cout << y + 1 << " | ";
        for (int z = 0; z < 8; z++) {
            cout << b[y][z] << " ";
        }
        cout << "| " << y + 1 << endl;
    }

    cout << "    ";

    for (int i = 0; i < 24; i++) {cout << "-";}//Bottom Edge

    char aGrid2 = 'A';//For the bottom lettering

    cout << endl << "    ";

    for (int i = 0; i < 8; i++) {//Adds the letters to the bottom
        cout << aGrid2 << "  ";
        aGrid2++;
    }

    cout << endl;
    cout << endl;
}

#endif
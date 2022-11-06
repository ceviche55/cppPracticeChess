#include <iostream>
#include <string>
#include <vector>
#include "drawBoard.h"
#include "peices.h"

using namespace std;

int main() {

    //Pawns objects get initialized
    pawnPeice   bp1("bp", 0), bp2("bp", 1), bp3("bp", 2), bp4("bp", 3), bp5("bp", 4), bp6("bp", 5), bp7("bp", 6), bp8("bp", 7), 
                wp1("wp", 0), wp2("wp", 1), wp3("wp", 2), wp4("wp", 3), wp5("wp", 4), wp6("wp", 5), wp7("wp", 6), wp8("wp", 7);

    //Rooks objects get initialized
    rookPeice br1("br", 0), br2("br", 7), wr1("wr", 0), wr2("wr", 7);

    //Knights objects get initialized
    knightPeice bk1("bk", 1), bk2("bk", 6), wk1("wk", 1), wk2("wk", 6);

    //Bishops objects get initialized
    bishopPeice bb1("bb", 2), bb2("bb", 5), wb1("wb", 2), wb2("wb", 5);

    //Queens objects get initialized
    queenPeice bq1("bq", 3), wq1("wq", 3);

    //Kings objects get initialized
    kingPeice bK1("bK", 4), wK1("wK", 4);

    //Board gets initalized
    genPeice board[8][8] = 
        //Black Side
        {{br1, bk1, bb1, bq1, bK1, bb2, bk2, br2},
        {bp1, bp2, bp3, bp4, bp5, bp6, bp7, bp8},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
        //White Side
        {wp1, wp2, wp3, wp4, wp5, wp6, wp7, wp8},
        {wr1, wk1, wb1, wq1, wK1, wb2, wk2, wr2},};

    cout << "Welcome to C++ chess! (this game requires 2 humans to play)\n";

    string p1, p2; //Player 1 and Player 2

    int choice;

    cout << "Are you ready to start?\n";

    cout << "1. Start\n";
    cout << "2. Exit\n";

    cin >> choice;

    if (choice == 2) {return 0;}

    cout << "What is Player 1's name:\t";

    cin >> p1;

    cout << "\nWhat is Player 2's name:\t";

    cin >> p2;

    cout << endl;

    int xChoice, yChoice, xChoice2, yChoice2;
    char xChoiceVar;

    drawBoard(board);

    //cout << p1 << "'s Turn:\n";

    cout << "Which peice do you wanna move?\n";

    cout << "Which row is it in (number)?:\t";

    cin >> yChoice;

    yChoice--;

    cout << "Which column is it (letter)?\t";

    cin >> xChoiceVar;

    xChoice = letterToNum(xChoiceVar);

//----------------------------------------------------------

    cout << "\n*******************************\n";

    cout << "Where do you wanna move it?\n";

    cout << "Which row is it in (number)?:\t";

    cin >> yChoice2;

    yChoice2--;

    cout << "Which column is it (letter)?\t";

    cin >> xChoiceVar;

    xChoice2 = letterToNum(xChoiceVar);

    board[yChoice][xChoice].peiceMove(&board, yChoice, xChoice, yChoice2, xChoice2);

    drawBoard(board);

    return 0;
}

#ifndef PEICES_H
#define PEICES_H

#include <iostream>
#include <string>

using namespace std;

struct point {
    
    int x, y;
    point(int a, int b) {
        this->x = a;
        this->y = b;
    }
};

class genPeice {

    //Encapsulation
    //The specifying data is private
    private:
        char name, color;
        string fName;
        int x, y;


    public:
        //Constructors
        genPeice();
        genPeice(const char[3]);
        genPeice(string c, int x);

        //Getters
        char getName() {return name;}
        char getColor() {return color;}
        string getFName() const {return fName;}
        int getX() {return x;}
        int getY() {return y;}

        //Setters
        void setName(char n) {name = n;}
        void setColor(char c) {color = c;}
        void setX(int xCor) {x = xCor;}
        void setY(int yCor) {y = yCor;}
        void setFName(string fn) {
            
            fName = fn;

            //Making sure to the name and color for later use
            char n = fn[1], c = fn[0];

            setName(n);
            setColor(c);
        }

        //Move function for empty spot
        void peiceMove(genPeice (*b)[8][8], int y1, int x1, int y2, int x2);

        //Move function for taking peice
        //Don't Return send the taken peice to new array in genPiece
        //genPeice peiceMoveTake(genPeice *b[8][8], int x, int y, int x2, int y2);
};

//Classes for different types of peices

class rookPeice : public genPeice {

    private:

    public:

        //Constructors
        rookPeice(string fn, int x);

        //Methods
        void validMove(genPeice b[8][8], int y1, int x1, int y2, int x2);
};

class pawnPeice : public genPeice {

    private:

    public:
        //Constructors
        pawnPeice(string fn, int x);

        //Methods
};

class knightPeice : public genPeice {

    private:

    public:
        //Constructors
        knightPeice(string fn, int x);

        //Methods
};

class bishopPeice : public genPeice {

    private:

    public:
        //Constructors
        bishopPeice(string fn, int x);

        //Methods
};

class queenPeice : public genPeice {

    private:

    public:
        //Constructors
        queenPeice(string fn, int x);

        //Methods
};

class kingPeice : public genPeice {

    private:

    public:
        //Constructors
        kingPeice(string fn, int x);

        //Methods
};

#endif
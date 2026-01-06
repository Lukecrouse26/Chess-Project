#include "pawn.h"
#include <string>
using namespace std;


Pawn::Pawn(Color color_, Position startPos) :
    Piece(color_, name, startPos), enPassantFlag(0), canMove(0), canPromote(1), canTake(1) {}

int Pawn::getCanMoveVal() const {
    return canMove;
}

int Pawn::getCanPromoteVal() const {
    return canPromote;
}

int Pawn::getCanTakeVal() const {
    return canTake;
}

int Pawn::getEnpassantVal() const {
    return enPassantFlag;
}

//implement after movetable creation
bool Pawn::isValidMove(const Position &newPos) const {

}

void Pawn::move(const Position &newPos) {

}

void Pawn::promote() {

}

void Pawn::take(const Position &takePos) {

}

//for the next four functions, in code where these get called, make sure to check for other conditions/rules before calling
void Pawn::setCanMove(int newVal) {
    if (canMove != newVal) {
        canMove = newVal;
    }
}

void Pawn::setCanPromote(int newVal) {
    if (canPromote != newVal) {
        canPromote = newVal;
    }
}

void Pawn::setCanTake(int newVal) {
    if (canTake != newVal) {
        canTake = newVal;
    }
}

void Pawn::setEnpassantZero(int newVal) {
    if (enPassantFlag != newVal) {
        enPassantFlag = newVal;
    }
}











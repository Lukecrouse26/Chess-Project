#pragma once
#include "piece.h"

class Pawn : public Piece {
private:
    int enPassantFlag;
    int canMove;
    int canTake;
    int canPromote;

public:

    Pawn(char color_, Position startPos);

    void move(const Position& newPos);
    void take(const Position& takePos);
    void promote();

    void setEnpassantZero();
    void setCanTake();
    void setCanMove();
    void setCanPromote();

    int getEnpassantVal() const;
    int getCanTakeVal() const;
    int getCanMoveVal() const;
    int getCanPromoteVal() const;

    bool isValidMove(const Position& newPos) const override;
};
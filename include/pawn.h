#pragma once
#include "piece.h"
#include <vector>

class Pawn : public Piece {
public:
    int enPassantFlag;
    int canMove;
    int canTake;
    int canPromote;

    Pawn()


}
#pragma once
#include <string>
#include "Position.h"

class Piece {
protected:
    char color;
    Position pos;
    std::string name;

public:

    //funcitons here
    Piece(char color_, const std::string& name_, Position pos_);

    virtual bool isValidMove(const Position& newPos) const = 0;

    Position getPosition() const { return pos; }
    char getColor() const { return color; }
    std::string getName() const { return name; }



    virtual ~Piece() = default;
};

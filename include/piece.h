#pragma once
#include <string>
#include "Color.h"
#include "Position.h"

class Piece {
public:
    Color color;
    std::string name;
    Position pos;

    //funcitons here
    Piece(Color color_, const std::string& name_, Position pos_);

    virtual bool isValidMove(const Position& newPos) const = 0;

    Position getPosition() const { return pos; }
    Color getColor() const { return color; }
    std::string getName() const { return name; }



    virtual ~Piece() = default;
};

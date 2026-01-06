#pragma once
#include "Position.h"
#include <string>

class Piece {
protected:
    char color;
    Position pos;
    std::string name;
    int isPinned;

public:

    //functions here
    Piece(char color_, const std::string& name_, Position pos_);

    [[nodiscard]] virtual bool isValidMove(const Position& newPos) const;

    Position getPosition() const;
    char getColor() const;
    std::string getName() const;
    int getIsPinned() const;



    virtual ~Piece() = default;
};

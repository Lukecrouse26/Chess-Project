#pragma once
#include "Position.h"
#include <string>

enum class Color {
    White, Black
};

class Piece {
protected:
    Color color;
    Position pos;
    std::string name;
    int isPinned;

public:

    //functions here
    Piece(Color color_, const std::string& name_, Position pos_);

    [[nodiscard]] virtual bool isValidMove(const Position& newPos) const;

    Position getPosition() const;
    Color getColor() const;
    std::string getName() const;
    int getIsPinned() const;



    virtual ~Piece() = default;
};

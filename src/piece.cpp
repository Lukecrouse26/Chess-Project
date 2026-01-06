#include "piece.h"
#include <string>
using namespace std;

Piece::Piece(Color color_, const string& name_, Position pos_) :
    color(color_), name(name_), pos(pos_), isPinned(0) {}

//this needs to be done later once movetables are finished
[[nodiscard]] bool Piece::isValidMove(const Position& newPos) const {

}

Position Piece::getPosition() const {
    return pos;
}

Color Piece::getColor() const {
    return color;
}


std::string Piece::getName() const {
    return name;
}

int Piece::getIsPinned() const {
    return isPinned;
}

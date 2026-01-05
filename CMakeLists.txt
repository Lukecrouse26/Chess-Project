cmake_minimum_required(VERSION 4.0)
project(Chess_Project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(include)

add_executable(Chess_Project
        include/bishop.h
        include/board.h
        include/game.h
        include/king.h
        include/knight.h
        include/movetables.h
        include/pawn.h
        include/piece.h
        include/player.h
        include/Position.h
        include/queen.h
        include/rook.h
        src/bishop.cpp
        src/board.cpp
        src/game.cpp
        src/king.cpp
        src/knight.cpp
        src/main.cpp
        src/movetables.cpp
        src/pawn.cpp
        src/piece.cpp
        src/player.cpp
        src/queen.cpp
        src/rook.cpp)

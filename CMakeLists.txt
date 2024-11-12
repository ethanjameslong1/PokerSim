cmake_minimum_required(VERSION 3.29)
project(Poker)

set(CMAKE_CXX_STANDARD 20)

add_executable(Poker main.cpp
        Deck.cpp
        Deck.h
        Player.cpp
        Player.h
        Card.cpp
        Card.h
        Game.cpp
        Game.h)

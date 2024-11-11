//
// Created by ethan on 11/4/2024.
//

#ifndef DECK_HPP
#define DECK_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Card.h"

class Deck {
protected:
    std::vector<Card> cards;
public:
    bool shuffled;
    Deck();
    void shuffle();
    void printDeck() const;
    void deal(Player player,int n = 1);


    friend class Player;
};
#endif //DECK_HPP

//
// Created by ethan on 11/10/2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
class Player {
private:
  std::vector<Card> *hand;
public:
  void printHand();
  Player() {hand = new std::vector<Card>;};
  void addCard(Card c);
};



#endif //PLAYER_H

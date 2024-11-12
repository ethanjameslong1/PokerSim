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
  unsigned int chips;
public:
  std::string name;
  void printHand();
  Player(const unsigned int chipNum,std::string title) {hand = new std::vector<Card>; chips=chipNum; name=title;};
  void addCard(Card c);
};



#endif //PLAYER_H

//
// Created by ethan on 11/10/2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
class Player {
private:
  std::vector<Card> * hand;
  unsigned int chips;
public:

  unsigned int TplayerOption(std::pair<bool,unsigned int>& playerActive,unsigned int betSize=0);
  std::string name;
  void printHand();
  Player(const unsigned int chipNum,std::string title) {hand = new std::vector<Card>; chips=chipNum; name=title;};
  void addCard(Card c);
  void clearHand();
  bool giveChips(unsigned int chipNum, Player &player);
};



#endif //PLAYER_H

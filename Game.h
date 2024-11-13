//
// Created by ethan on 11/11/2024.
//

#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Deck.h"
#include <string>

class Game
{
  public:
  Player table;
  std::vector<Player> players;
  Deck deck;
  char gameType;
  Game(const std::vector<Player> &group,char gameType): table(Player(0,"The Table"))
  {
    players = group;
    gameType = gameType;
    deck = Deck();
  }

  void playGame();
private:
  void playTexasHoldEm(unsigned int blind);
};


#endif //GAME_H

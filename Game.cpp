//
// Created by ethan on 11/11/2024.
//

#include "Game.h"

void Game::playGame()
{
  switch (gameType)
  {
    case 'T':
    std::cout<<"Enter Blind: ";
    unsigned int blindLevel;
    std::cin>>blindLevel;
    playTexasHoldEm(blindLevel);
    break;
  }
}


void Game::playTexasHoldEm(unsigned int blind)
{
  unsigned int hold[players.size()];
  Player * button = &players[0];
  std::cout<<(*button).name;

}

void Game::playerOption()
{
  std::cout<<"Player Options: ";

}


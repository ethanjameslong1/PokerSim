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
  int gameSize = players.size();
  bool newRoundFlag=true;
  bool betsOff;
  bool playing=true;
  std::pair<bool,unsigned int> active[gameSize];
  int blindNum=0;
  unsigned int currentBet=blind;
  unsigned int hold[gameSize];
  Player * button = &players[blindNum];

  while(playing)
  {
    if(newRoundFlag)
    {
      std::fill(active,active+gameSize,std::make_pair(true,(unsigned int)0));
      if (!players[blindNum].giveChips(blind,table)) active[blindNum].first=false;
      for (int i=0;i<gameSize;i++)
      {
        players[i].clearHand();
        deck.deal(players[i],2);
      }
    }
    //pre-flop
    for (int i=0;i<gameSize;i++)
    {

    }
  }


}

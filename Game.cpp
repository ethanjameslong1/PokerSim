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
  std::pair<bool,unsigned int> active[gameSize];
  std::fill(active[0],active[players.size()-1],std::make_pair(true,(unsigned int)0));
  int buttonNum=0;
  unsigned int currentBet=blind;
  unsigned int hold[players.size()];
  Player * button = &players[buttonNum];
  if (!players[buttonNum+1].giveChips(blind,table)) active[buttonNum+1].first=false;

  for (int i=0;i<gameSize;i++)
  {
    deck.deal(players[i],2);
  }

  std::cout<<players[buttonNum+2].name;
  currentBet = TplayerOption(active[buttonNum+2],currentBet);
  std::cout<<"\n\n";
  std::cout<<players[buttonNum+3].name;
  currentBet = TplayerOption(active[buttonNum+3],currentBet);

}




}


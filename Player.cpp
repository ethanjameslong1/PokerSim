//
// Created by ethan on 11/10/2024.
//

#include "Player.h"

#include <iostream>

void Player::printHand()
{
  for (int i=0;i<(*hand).size()-1;i++)
  {
    std::cout<<(*hand)[i].cardToString()<<", ";
    if(i%4==3) std::cout<<"\n";
  }
  std::cout<<(*hand)[(*hand).size()-1].cardToString()<<"\n";
}

void Player::addCard(Card c)
{
  (*hand).push_back(c);
}

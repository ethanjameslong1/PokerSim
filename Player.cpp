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

bool Player::giveChips(unsigned int chipNum, Player player)
{
  if (chips>chipNum)
  {
    chips-=chipNum;
    player.chips +=chipNum;
    return true;
  }
  std::cout<<"Not enough chips, sorry mate\n";
  return false;
}

unsigned int Player::TplayerOption(std::pair<bool,unsigned int>& playerActive,unsigned int betSize)
{
  if(!playerActive.first) {std::cout<<"Player is not active, next player!"; return 0;}
  char option;
  std::cout<<"'s Options: \nF: Fold, C: Call "<<betSize;
  std::cout<<", R: Raise\n";
  do
  {
    std::cout<<"Enter Option (C,R,F): ";
    std::cin>>option;
  }  while (!(toupper(option) == 'F' || toupper(option) == 'R' || toupper(option) == 'C'));
  do
  {
    switch(toupper(option))
    {
      case 'F':
        playerActive.first=false;
      return 0;
      case 'C':
        chips-=betSize;
      playerActive.second = betSize;
      return betSize;
      case 'R':
        std::cout<<"How much?: \n";
        unsigned int raiseSize;
        std::cin>>raiseSize;
        while (raiseSize<betSize*2)
        {
          std::cout<<"Must be atleast "<<betSize*2<<"\nEnter: ";
          std::cin>>raiseSize;
        }
        if (raiseSize>chips)
        {
        //std::cout<<"All in for "<<chips<<"?";
        std::cout<<"Not Enough Chips! Select a new option.\n";
          std::cin>>option;
          while (!(toupper(option) == 'F' || toupper(option) == 'R' || toupper(option) == 'C')) { "\nF,R,C!!\n"; std::cin>>option; }
        }
      else
      {
        chips-=raiseSize;
        return raiseSize;
      }
    }
  } while (option != 'G');
}
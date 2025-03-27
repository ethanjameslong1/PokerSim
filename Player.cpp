//
// Created by ethan on 11/10/2024.
//

#include "Player.h"

#include <iostream>

void Player::clearHand()
{
  hand = nullptr;
}

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

bool Player::giveChips(unsigned int chipNum, Player &player)
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
  if(!playerActive.first) {std::cout<<"Player is not active, next player!"; return betSize;}
  char option;
  if (chips<=betSize)
  {
    std::cout<<name<<" do you want to go all in for "<<chips<<"? (y or n)";
    std::cin>>option;
    while (tolower(option)!='y' && tolower(option)!='n')
    {
      std::cout<<"Please enter a valid option! (y or n)";
    }
    if (tolower(option)=='y')
    {
      std::cout<<"We have an all in!";
      chips = 0;
      playerActive.second = chips;
      return betSize;
    }
  }
  std::cout<<name<<"'s Options: \nF: Fold, C: Call "<<betSize;
  std::cout<<", R: Raise\n";
  do
  {
    std::cout<<"Enter Option (C,R,F): ";
    std::cin>>option;
  }  while (!(toupper(option) == 'F' || toupper(option) == 'R' || toupper(option) == 'C'));

    switch(toupper(option))
    {
      case 'F':
        playerActive.first=false;
        return betSize;
      case 'C':
        chips-=betSize;
        playerActive.second = betSize;
        return betSize;
      case 'R':
        std::cout<<"How much?: \n";
        unsigned int raiseSize;
        std::cin>>raiseSize;
        if (raiseSize>chips || chips<raiseSize*2)
        {
          std::cout<<"All in for "<<chips<<"? (y or f (fold))";
          std::cin>>option;
          while (tolower(option)!='f' && tolower(option)!='y')
          {
            std::cout<<"Y or F please!";
            std::cin>>option;
          }
          if(option=='y')
          {
            return chips;
            chips=0;
          }
          else
          {
            playerActive.first=false;
            return betSize;
          }
        }
        else
        {
          while (raiseSize<betSize*2)
          {
            std::cout<<"Must be atleast "<<betSize*2<<"\nEnter: ";
            std::cin>>raiseSize;
          }

          chips-=raiseSize;
          return raiseSize;
        }
    }
}
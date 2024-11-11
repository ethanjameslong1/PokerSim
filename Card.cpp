//
// Created by ethan on 11/10/2024.
//

#include "Card.h"

#include <iostream>


/*
 * Constructors
 */
Card::Card(char _suit, int _rank)
{
  dealt = false;
  if (_suit == 's' || _suit == 'c' || _suit == 'h' || _suit == 'd')
    suit = _suit;
  else suit = 's';
  switch (_rank) {
    case 2: rank = '2';
    break;
    case 3: rank = '3';
    break;
    case 4: rank = '4';
    break;
    case 5: rank = '5';
    break;
    case 6: rank = '6';
    break;
    case 7: rank = '7';
    break;
    case 8: rank = '8';
    break;
    case 9: rank = '9';
    break;
  }
}

Card::Card(char _suit, char _rank)
{
  dealt = false;
  if (_suit == 's' || _suit == 'c' || _suit == 'h' || _suit == 'd')
    suit = _suit;
  else suit = 's';
  switch (_rank) {
    case 't': rank = 't';
    break;
    case 'w': rank = 'w';
    break;
    case 'x': rank = 'x';
    break;
    case 'y': rank = 'y';
    break;
    case 'z': rank = 'z';
    break;
    default: rank = '?';
  }
}

/*
 *Displaying cards
 */
std::string Card::cardToString() //Used to convert cards to string
{

  std::string output="";
  {
    output = output+returnRank()+" ";
    switch (suit)
    {
      case 's': output = output+"of Spades"; break;
      case 'c': output = output+"of Clubs"; break;
      case 'h': output = output+"of Hearts"; break;
      case 'd': output = output+"of Diamonds"; break;
      default: output = output+"error"; break;
    };
    return output;
  }
}
void Card::printCard() const
{
  std::cout<<returnRank()<<" ";
  switch (suit)
  {
    case 's': std::cout<<"of Spades"; break;
    case 'c': std::cout<<"of Clubs"; break;
    case 'h': std::cout<<"of Hearts"; break;
    case 'd': std::cout<<"of Diamonds"; break;
    default: std::cout<<"error"; break;
  }
}
std::string Card::returnRank() const {
  switch (rank)
  {
    case '2': return "deuce"; break;
    case '3': return "three"; break;
    case '4': return "four"; break;
    case '5': return "five"; break;
    case '6': return "six"; break;
    case '7': return "seven"; break;
    case '8': return "eight"; break;
    case '9': return "nine"; break;
    case 't': return "ten"; break;
    case 'w': return "jack"; break;
    case 'x': return "queen"; break;
    case 'y': return "king"; break;
    case 'z': return "ace"; break;
    default: return "error"; break;
  }
}
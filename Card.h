//
// Created by ethan on 11/10/2024.
//

#ifndef CARD_H
#define CARD_H
#include <string>
class Card {
protected:
  char suit;
  char rank;
  bool dealt;
  std::string returnRank() const;
  Card(char _suit, int _rank);
  Card(char _suit, char _rank);
  Card() {}
public:
  void printCard() const;
  std::string cardToString();
  char getSuit() const{return suit;}
  char getRank() const{return rank;}
  bool isDealt() const{return dealt;}

  friend class Deck;
}; // end of card struct



#endif //CARD_H

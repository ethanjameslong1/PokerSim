//
// Created by ethan on 11/4/2024.
//

#include "Deck.h"
#include "Card.h"
#include <iostream>

Deck::Deck()
{
    shuffled = false;
    Card *temp;
    for (int i = 2; i <= 9; i++) {
        temp = new Card('s', i);
        cards.push_back(*temp);
    }
    temp = new Card('s', 't');
    cards.push_back(*temp);
    temp = new Card('s', 'w');
    cards.push_back(*temp);
    temp = new Card('s', 'x');
    cards.push_back(*temp);
    temp = new Card('s', 'y');
    cards.push_back(*temp);
    temp = new Card('s', 'z');
    cards.push_back(*temp);
    for (int i = 2; i <= 9; i++) {
        temp = new Card('h', i);
        cards.push_back(*temp);
    }
    temp = new Card('h', 't');
    cards.push_back(*temp);
    temp = new Card('h', 'w');
    cards.push_back(*temp);
    temp = new Card('h', 'x');
    cards.push_back(*temp);
    temp = new Card('h', 'y');
    cards.push_back(*temp);
    temp = new Card('h', 'z');
    cards.push_back(*temp);
    for (int i = 2; i <= 9; i++) {
        temp = new Card('c', i);
        cards.push_back(*temp);
    }
    temp = new Card('c', 't');
    cards.push_back(*temp);
    temp = new Card('c', 'w');
    cards.push_back(*temp);
    temp = new Card('c', 'x');
    cards.push_back(*temp);
    temp = new Card('c', 'y');
    cards.push_back(*temp);
    temp = new Card('c', 'z');
    cards.push_back(*temp);
    for (int i = 2; i <= 9; i++) {
        temp = new Card('d', i);
        cards.push_back(*temp);
    }
    temp = new Card('d', 't');
    cards.push_back(*temp);
    temp = new Card('d', 'w');
    cards.push_back(*temp);
    temp = new Card('d', 'x');
    cards.push_back(*temp);
    temp = new Card('d', 'y');
    cards.push_back(*temp);
    temp = new Card('d', 'z');
    cards.push_back(*temp);
}

void Deck::shuffle()
{
    srand(time(0));
    for (int i = 0; i < cards.size(); i++)
    {
        int j = i + (rand() % 52-i);
        std::swap(cards[i],cards[j]);
    }
}


void Deck::printDeck() const
{
    for (int i = 0; i < cards.size(); i++)
    {
        if (cards[i].dealt == false) {cards[i].printCard(); std::cout<<"\n";}
    }
}
void Deck::deal(Player player,int n)
{
    int num=0;
    for (int i=0; i < n;)
    {
        if (cards[num].dealt == false)
        {
            player.addCard(cards[num]);
            cards[num].dealt = true;
            i++;
        }
        num++;
    }
}





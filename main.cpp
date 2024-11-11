#include <iostream>
#include "Player.h"
#include "Deck.h"

int main()
{
    Deck myDeck = Deck();
    myDeck.printDeck();
    myDeck.shuffle();
    std::cout<<"\n\n\n";
    myDeck.printDeck();
    Player ethan = Player();
    myDeck.deal(ethan,2);



    std::cout<<"Ethan's hand, 2 cards dealt: \n";
    ethan.printHand();

    std::cout<<"\nEthan's hand, 3 more cards dealt: \n";
    myDeck.deal(ethan,3);
    ethan.printHand();

    std::cout<<"\n\nDeck after dealing 4 cards:\n";
    myDeck.printDeck();
    myDeck.shuffle();
    myDeck.printDeck();

    return 0;
}

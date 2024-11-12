#include <iostream>
#include "Player.h"
#include "Deck.h"
#include "Game.h"

int main()
{
    Deck myDeck = Deck();
    myDeck.printDeck();
    myDeck.shuffle();
    std::cout<<"\n\n\n";
    myDeck.printDeck();
    Player ethan = Player(1000,"ethan");
    Player Lizzie = Player(1000,"Lizzie");
    Player Sierra = Player(1000,"Sierra");
    Player Dylan = Player(1000,"Dylan");
    Player Kamala = Player(1000,"Kamala");
    std::vector<Player> theGuys;
    theGuys.push_back(ethan);
    theGuys.push_back(Lizzie);
    theGuys.push_back(Sierra);
    theGuys.push_back(Dylan);
    theGuys.push_back(Kamala);

    Game game = Game(theGuys,'T');
    game.playGame();
    return 0;
}

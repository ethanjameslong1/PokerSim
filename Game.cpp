//
// Created by ethan on 11/11/2024.
//

#include "Game.h"

void Game::playGame() {
  switch (gameType) {
  case 'T':
    std::cout << "Enter Blind: ";
    unsigned int blindLevel;
    std::cin >> blindLevel;
    playTexasHoldEm(blindLevel);
    break;
  }
}

void Game::playTexasHoldEm(unsigned int blind) {
  int gameSize =
      players.size();       // game size is the amount of players at the "table"
  bool newRoundFlag = true; // new round flag will be used to determine when to
                            // reset the table and prepare for a new flop
  bool playing = true; // simply used to easily end the game when desired.
  std::pair<bool, unsigned int>
      active[gameSize]; // used to store information about players, if they're
                        // in this round and how many chips they have wagered
                        // during a stage of betting.
  int blindNum = 0; // a kind of bad way of determining the button, I should
                    // make it random.
  bool flagFlopDone;
  bool flagTurnDone;
  bool flagRiverDone;
  unsigned int currentBet = blind;
  unsigned int hold[gameSize];
  Player *button = &players[blindNum];

  while (playing) {
    if (newRoundFlag) {
      flagFlopDone = false;
      flagTurnDone = false;
      flagRiverDone = false;
      blindNum = (blindNum >= gameSize - 1) ? 0 : blindNum + 1;
      std::fill(active, active + gameSize,
                std::make_pair(true, (unsigned int)0));
      if (!players[blindNum].giveChips(blind, table))
        active[blindNum].first = false;
      for (int i = 0; i < gameSize; i++) {
        players[i].clearHand();
        deck.deal(players[i], 2);
      }
    }
    // pre-flop
    for (int i = 0; i < gameSize; i++) {
    }
  }
}

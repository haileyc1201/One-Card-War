// Deck.h
#ifndef DECK_H
#define DECK_H
#include "card.h"
class Deck {
private:
  Card cards[52];
  int currentCard;

public:
  Deck();         // Constructor which creates a deck of 52 cards
  Card deal();    // Deal a card
  void print();   // Show all cards in the deck
  void shuffle(); // Shuffle the cards in the deck
};
#endif

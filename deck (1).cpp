

// Deck.cpp
#include "deck.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
// Constructor for the deck
Deck::Deck() : currentCard(0) {
  // Clubs, Spades, Diamonds, and Hearts
  char suits[] = {'C', 'S', 'D', 'H'};
  // Ranks of cards
  char ranks[] = {'A', '2', '3', '4', '5', '6', '7',
                  '8', '9', 'T', 'J', 'Q', 'K'};
  // Creating the deck unshuffled
  int index = 0;
  for (char suit : suits) {
    for (char rank : ranks) {
      cards[index++] = Card(rank, suit);
    }
  }
}
// Method to shuffle the deck
void Deck::shuffle() {
  // Shuffling the deck by randomly swapping cards repeatedly
  srand(time(0));
  for (int i = 0; i < 52; ++i) {
    int j = rand() % 52;
    std::swap(cards[i], cards[j]);
  }
  currentCard = 0;
}
// Method to deal the next card
Card Deck::deal() {
  if (currentCard < 52)
    return cards[currentCard++];
  return Card(); // Return a default card if out of cards
}
// Print method
void Deck::print() {
  for (int i = 0; i < 52; ++i) {
    cards[i].print();
    std::cout << " ";
    if ((i + 1) % 13 == 0)
      std::cout << std::endl; // Print 13 cards per line
  }
}

// Card.cpp
#include "card.h"
#include <iostream>
// Constructors
Card::Card() : suit('0'), rank('0') {}
Card::Card(char r, char s) : suit(s), rank(r) {}
// Print function for the cards
void Card::print() {
  // If the card is a 10, print a 10 instead of a T
  if (rank == 'T') {
    std::cout << "10" << suit;
  }
  // otherwise, print the rank and suit normally
  else {
    std::cout << rank << suit;
  }
}
// Function to compare two cards
int Card::compare(Card c) {
  // Establishing the order of rank for the cards
  const char ranks[] = "A23456789TJQK";
  int this_rank = -1, other_rank = -1;
  // Finding the rank of the cards
  for (int i = 0; i < 13; ++i) {
    if (ranks[i] == rank)
      this_rank = i;
    if (ranks[i] == c.rank)
      other_rank = i;
  }
  // Return number based on which card ranks higher
  if (this_rank > other_rank)
    return 1;
  if (this_rank < other_rank)
    return -1;
  return 0;
}

// Card.h
#ifndef CARD_H
#define CARD_H
// constructor to create a card, setting the suit and rank
class Card {
private:
  char suit;
  char rank;

public:
  Card();               // default Card needed for array
  Card(char r, char s); // Parameterized constructor
  void print();         // display the card example: AC, 10S, KD
  int compare(Card c);  // return 1 for win, 0 for tie, -1 for lose
};
#endif

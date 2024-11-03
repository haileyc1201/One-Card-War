// Name: Hailey Clark
// Class (CECS 325-01)
// Project Name (Prog 1 – One Card War)
// Due Date (09/19/2024)
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.
//main.cpp
#include <iostream>
#include "deck.h"
#include "card.h"
int main() {
    std::string player1, player2;
    //Getting player names
    std::cout << "Enter Player 1 name: ";
    std::cin >> player1;
    std::cout << "Enter Player 2 name: ";
    std::cin >> player2;
    //Creating the deck
    Deck deck;
    //Printing unshuffled deck
    std::cout << "\nUnshuffled deck:\n";
    deck.print();
    //Shuffling the deck
    deck.shuffle();
    //Printing shuffled deck
    std::cout << "\nShuffled deck:\n";
    deck.print();
    //Initializing scores
    int player1Wins = 0, player2Wins = 0, ties = 0;
    //Repeat the game 26 times
    for (int i = 0; i < 26; ++i) {
        //Printing the number of the round and dealing a card to each player
        std::cout << "\nRound " << (i + 1) << ":\n";
        Card card1 = deck.deal();
        Card card2 = deck.deal();
        //Printing the cards
        std::cout << player1 << " plays ";
        card1.print();
        std::cout << "\n" << player2 << " plays ";
        card2.print();
        std::cout << "\n";
        //Comparing the cards and printing the result
        int result = card1.compare(card2);
        if (result == 1) {
            std::cout << player1 << " wins this round!\n";
            player1Wins++;
        } else if (result == -1) {
            std::cout << player2 << " wins this round!\n";
            player2Wins++;
        } else {
            std::cout << "It's a tie!\n";
            ties++;
        }
    }
    //Print final scores
    std::cout << "\nGame Over! Final Statistics:\n";
    std::cout << player1 << " Wins: " << player1Wins << "\n";
    std::cout << player2 << " Wins: " << player2Wins << "\n";
    std::cout << "Ties: " << ties << "\n";
    return 0;
}
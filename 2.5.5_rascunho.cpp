#include <iostream>
#include <string>
using namespace std;
// This struct represents a card in the game.
struct Card {
  char suit;
  int value;
};
// This struct represents a pile of cards in the game.
struct Pile {
  Card cards[26];
  int num_cards;
};
// This struct represents a bag of cards in the game.
struct Bag {
  Card cards[20];
  int num_cards;
};
// This function initializes a pile of cards.
void init_pile(Pile *pile) {
  pile->num_cards = 0;
}
// This function adds a card to a pile.
void add_card_to_pile(Pile *pile, Card card) {
  pile->cards[pile->num_cards] = card;
  pile->num_cards++;
}
// This function removes the top card from a pile.
Card remove_top_card_from_pile(Pile *pile) {
  Card card = pile->cards[0];
  for (int i = 0; i < pile->num_cards - 1; i++) {
    pile->cards[i] = pile->cards[i + 1];
  }
  pile->num_cards--;
  return card;
}
// This function prints the contents of a pile of cards.
void print_pile(Pile *pile) {
  for (int i = 0; i < pile->num_cards; i++) {
    cout << pile->cards[i].suit << pile->cards[i].value << " ";
  }
  cout << endl;
}
// This function checks if a move is valid in FreeCell.
bool is_valid_move(Pile *from_pile, Pile *to_pile, Card card) {
  // Check if the move is from an empty pile.
  if (from_pile->num_cards == 0) {
    return false;
  }
  // Check if the move

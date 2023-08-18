// 1 rascunho do código do trabalho. Trabalhando com uma versão de Deck.h
#include <iostream>
#include "Deck.h"
#include <cstdlib>
#include <ctime>

#ifndef DECK_H
#define DECK_H

using namespace std;

class CardDealer {

public:
void Shuffle();
Card Draw(int &x);


private:


};
#endif // DECK_H


// Rascunho envolvendo Deck.cpp



// Rascunho envolvendo Driver.cpp
#include <iostream>
#include "Deck.h"

using namespace std;

int main(){


    
class Card{

{
public:
    Card(int rank = 0, int suit = 0, int color = 0) : rank(rank), suit(suit), color(color) {}

    int getRank() const { return rank; }
    int getSuit() const { return suit; }
    int getColor() const { return color; }

private:
    int rank;
    int suit;
    int color;
};



}
}

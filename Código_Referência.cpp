//código de referência usado pelo chatgpt
// esse aqui ele produziu um código completo no geral.

#include <iostream>
#include <cstdlib>
#include <ctime>

class CardDealer {
public:
    void deal(int game) {
        gameNumber = game;
        fillDeck();
        shuffle();
        display();
    }

private:
    void fillDeck() {
        int p = 0;
        for (int c = 0; c < 13; ++c) {
            for (int s = 0; s < 4; ++s) {
                cards[p++] = c | (s << 4);
            }
        }
    }

    void shuffle() {
        srand(static_cast<unsigned int>(time(nullptr)));
        int cc = 52, nc, lc;
        while (cc) {
            nc = rand() % cc;
            lc = cards[--cc];
            cards[cc] = cards[nc];
            cards[nc] = lc;
        }
    }

    void display() {
        const char* suit = "CDHS";
        const char* symb = "A23456789TJQK";
        int z = 0;
        std::cout << "GAME #" << gameNumber << std::endl << "=======================" << std::endl;
        for (int c = 51; c >= 0; --c) {
            std::cout << symb[cards[c] & 15] << suit[cards[c] >> 4] << " ";
            if (++z >= 8) {
                std::cout << std::endl;
                z = 0;
            }
        }
    }

    int cards[52];
    int gameNumber;
};

int main() {
    CardDealer dealer;
    int gameNumber;
    
    while (true) {
        std::cout << std::endl << "Game number please (0 to QUIT): ";
        std::cin >> gameNumber;
        if (gameNumber == 0) {
            break;
        }
        
        system("cls"); // Note: This might not work on all systems
        dealer.deal(gameNumber);
        std::cout << std::endl << std::endl;
    }

    return 0;
}

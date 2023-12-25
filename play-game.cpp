#include <iostream>
#include "play-game.hpp"

void print_board() {
    std::cout << "TIC-TAC-TOE\n\n";

    std::cout << "player 1: X\n";
    std::cout << "palyer 2: 0\n\n";

    std::cout << "Here's the Game board:\n\n";

    std::cout << " _________________  \n";
    std::cout << "|     |     |     | \n";
    std::cout << "|  1  |  2  |  3  | \n";
    std::cout << "|_____|_____|_____| \n";
    std::cout << "|     |     |     | \n";
    std::cout << "|  4  |  5  |  6  | \n";
    std::cout << "|_____|_____|_____| \n";
    std::cout << "|     |     |     | \n";
    std::cout << "|  7  |  8  |  9  | \n";
    std::cout << "|_____|_____|_____| \n\n";
}
#include <iostream>
#include "tic_tac_toe.hpp"

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char player = 'X';
    
    while (true) {
        print_board(board);
        int row, col;
        std::cout << "Player " << player << ", enter your move (row and column): ";
        std::cin >> row >> col;

        make_move(board, player, row, col);

        if (check_win(board)) {
            print_board(board);
            std::cout << "Player " << player << " wins!" << std::endl;
            break;
        } else if (check_draw(board)) {
            print_board(board);
            std::cout << "The game is a draw." << std::endl;
            break;
        }

        player = (player == 'X') ? 'O' : 'X'; // Switch player
    }

    return 0;
}
#ifndef TIC_TAC_TOE_HPP
#define TIC_TAC_TOE_HPP

void print_board(const char board[3][3]);
bool check_win(const char board[3][3]);
bool check_draw(const char board[3][3]);
void make_move(char board[3][3], char player, int row, int col);


#endif
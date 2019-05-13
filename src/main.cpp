#include "board.hpp"
#include "board_print_plain.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char a[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
    draw(a);
    string move;
    char temp;

    while (true) {
        getline(cin, move);
        if (move[0] == 'N')
            knight(move, a);
        if (move[0] == 'K')
            king(move, a);
        if (move[0] == 'R')
            rook(move, a);
        if (move[0] == 'B')
            bishop(move, a);
        if (move[0] == 'Q')
            queen(move, a);
        if (move[0] == 'a' || move[0] == 'b' || move[0] == 'c' || move[0] == 'd'
            || move[0] == 'e' || move[0] == 'f' || move[0] == 'g'
            || move[0] == 'h')
            pawn(move, a);
        else {
            cout << "WRONG INPUT\n";
            return 1;
        }
        draw(a);
    }
    return 0;
}

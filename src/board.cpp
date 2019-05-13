#include "board_print_plain.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int king(string move, char (&a)[8][8])
{
    char temp;
    temp = a[move[2] - '1'][move[1] - 'a'];
    if (move[3] == '-') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'K'
             && a[move[2] - '1'][move[1] - 'a'] != 'k')
            || a[move[5] - '1'][move[4] - 'a'] != ' '
            || ((abs((int)(move[2] - '1') - (int)(move[5] - '1')) != 1)
                && (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) != 1))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    if (move[3] == 'x') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'K'
             && a[move[2] - '1'][move[1] - 'a'] != 'k')
            || a[move[5] - '1'][move[4] - 'a'] == ' '
            || ((abs((int)(move[2] - '1') - (int)(move[5] - '1')) != 1)
                && (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) != 1))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    return 0;
}

int rook(string move, char (&a)[8][8])
{
    char temp;
    temp = a[move[2] - '1'][move[1] - 'a'];
    if (move[3] == '-') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'R'
             && a[move[2] - '1'][move[1] - 'a'] != 'r')
            || a[move[5] - '1'][move[4] - 'a'] != ' '
            || ((abs((int)(move[2] - '1') - (int)(move[5] - '1')) > 0)
                && (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) > 0))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    if (move[3] == 'x') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'R'
             && a[move[2] - '1'][move[1] - 'a'] != 'r')
            || a[move[5] - '1'][move[4] - 'a'] == ' '
            || ((abs((int)(move[2] - '1') - (int)(move[5] - '1')) > 0)
                && (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) > 0))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    return 0;
}

int bishop(string move, char (&a)[8][8])
{
    char temp;
    temp = a[move[2] - '1'][move[1] - 'a'];
    if (move[3] == '-') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'B'
             && a[move[2] - '1'][move[1] - 'a'] != 'b')
            || a[move[5] - '1'][move[4] - 'a'] != ' '
            || ((abs((int)(move[2] - '1') - (int)(move[5] - '1')))
                != (abs((int)(move[1] - 'a') - (int)(move[4] - 'a'))))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    if (move[3] == 'x') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'B'
             && a[move[2] - '1'][move[1] - 'a'] != 'b')
            || a[move[5] - '1'][move[4] - 'a'] == ' '
            || ((abs((int)(move[2] - '1') - (int)(move[5] - '1')))
                != (abs((int)(move[1] - 'a') - (int)(move[4] - 'a'))))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    return 0;
}

int queen(string move, char (&a)[8][8])
{
    char temp;
    temp = a[move[2] - '1'][move[1] - 'a'];
    if (move[3] == '-') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'Q'
             && a[move[2] - '1'][move[1] - 'a'] != 'q')
            || a[move[5] - '1'][move[4] - 'a'] != ' '
            || (((abs((int)(move[2] - '1') - (int)(move[5] - '1')) > 0)
                 && (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) > 0))
                && ((abs((int)(move[2] - '1') - (int)(move[5] - '1')))
                    != (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')))))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    if (move[3] == 'x') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'Q'
             && a[move[2] - '1'][move[1] - 'a'] != 'q')
            || a[move[5] - '1'][move[4] - 'a'] == ' '
            || (((abs((int)(move[2] - '1') - (int)(move[5] - '1')) > 0)
                 && (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) > 0))
                && ((abs((int)(move[2] - '1') - (int)(move[5] - '1')))
                    != (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')))))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    return 0;
}

int pawn(string move, char (&a)[8][8])
{
    char temp;
    temp = a[move[1] - '1'][move[0] - 'a'];
    if (move[2] == '-') {
        if (a[move[4] - '1'][move[3] - 'a'] != ' '
            || (a[move[1] - '1'][move[0] - 'a'] != 'p'
                && a[move[1] - '1'][move[0] - 'a'] != 'P')
            || (move[0] != move[3])
            || ((abs((int)(move[1] - '1') - (int)(move[4] - '1'))) != 1
                && (abs((int)(move[1] - '1') - (int)(move[4] - '1'))) != 2))
        /*1 срубание в простой ход? 2 пешка ли? 3 ровность хода? 4 дальность
           хода*/
        {
            cout << "ERROR WRONG INPUT\n";
            return 1;
        } else {
            a[move[1] - '1'][move[0] - 'a'] = ' ';
            a[move[4] - '1'][move[3] - 'a'] = temp;
        }
    } else if (move[2] == 'x') {
        if (a[move[4] - '1'][move[3] - 'a'] == ' '
            || (a[move[1] - '1'][move[0] - 'a'] != 'p'
                && a[move[1] - '1'][move[0] - 'a'] != 'P')) {
            cout << "ERROR WRONG INPUT\n";
            return 1;
        } else {
            a[move[1] - '1'][move[0] - 'a'] = ' ';
            a[move[4] - '1'][move[3] - 'a'] = temp;
        }
    }
    return 0;
}

int knight(string move, char (&a)[8][8])
{
    char temp;
    temp = a[move[2] - '1'][move[1] - 'a'];
    if (move[3] == '-') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'N'
             && a[move[2] - '1'][move[1] - 'a'] != 'n')
            || a[move[5] - '1'][move[4] - 'a'] != ' '
            || (((abs((int)(move[2] - '1') - (int)(move[5] - '1')) != 2)
                 || (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) != 1))
                && ((abs((int)(move[2] - '1') - (int)(move[5] - '1')) != 1)
                    || (abs((int)(move[1] - 'a') - (int)(move[4] - 'a'))
                        != 2)))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    if (move[3] == 'x') {
        if ((a[move[2] - '1'][move[1] - 'a'] != 'N'
             && a[move[2] - '1'][move[1] - 'a'] != 'n')
            || a[move[5] - '1'][move[4] - 'a'] == ' '
            || (((abs((int)(move[2] - '1') - (int)(move[5] - '1')) != 2)
                 || (abs((int)(move[1] - 'a') - (int)(move[4] - 'a')) != 1))
                && ((abs((int)(move[2] - '1') - (int)(move[5] - '1')) != 1)
                    || (abs((int)(move[1] - 'a') - (int)(move[4] - 'a'))
                        != 2)))) {
            cout << "WRONG INPUT\n";
            return 1;
        } else {
            a[move[2] - '1'][move[1] - 'a'] = ' ';
            a[move[5] - '1'][move[4] - 'a'] = temp;
        }
    }
    return 0;
}

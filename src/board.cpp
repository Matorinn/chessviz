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
    draw(a);
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
    draw(a);
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
    draw(a);
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
    draw(a);
    return 0;
}

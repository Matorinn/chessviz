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
    getline(cin, move);
    cout << "1 element =" << move[1] - '1' << "/" << move[0] - 'a' << endl;
    temp = a[move[1] - '1'][move[0] - 'a'];
    if (move[2] == '-') {
        if (a[move[4] - '1'][move[0] - 'a'] != ' '
            || (a[move[1] - '1'][move[0] - 'a'] != 'p'
                && a[move[1] - '1'][move[0] - 'a'] != 'P')
            || (move[0] != move[3])
            || (abs((int)(move[1] - '1') - (int)(move[4] - '1'))) != 1)
        /*1 срубание в простой ход? 2 пешка ли? 3 ровность хода? 4 дальность
           хода*/
        {
            cout << "ERROR WRONG INPUT";
            return 0;
        } else {
            a[move[1] - '1'][move[0] - 'a'] = ' ';
            a[move[4] - '1'][move[3] - 'a'] = temp;
        }
    } else if (move[2] == 'x') {
        if (a[move[4] - '1'][move[3] - 'a'] == ' '
            || (a[move[1] - '1'][move[0] - 'a'] != 'p'
                && a[move[1] - '1'][move[0] - 'a'] != 'P')) {
            cout << "ERROR WRONG INPUT";
            return 0;
        } else {
            a[move[1] - '1'][move[0] - 'a'] = ' ';
            a[move[4] - '1'][move[3] - 'a'] = temp;
        }
    } else {
        cout << "ERROR WRONG INPUT";
        return 0;
    }
    cout << "wow" << temp << "wow" << endl;
    draw(a);
    return 0;
}

#ifndef BOARD_HPP
#define BOARD_HPP
using namespace std;
#include <string>
int king(string move, char (&a)[8][8]);
int rook(string move, char (&a)[8][8]);
int bishop(string move, char (&a)[8][8]);
int queen(string move, char (&a)[8][8]);
int pawn(string move, char (&a)[8][8]);
int knight(string move, char (&a)[8][8]);
#endif

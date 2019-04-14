#include "board_print_plain.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  char A[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                  {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                  {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                  {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
  draw(A);
  return 0;
}

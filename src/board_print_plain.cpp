#include <iostream>

using namespace std;

void draw(char A[8][8]) {
  int i, j;
  for (i = 7; i > -1; i--) {
    cout << i + 1 << " ";
    for (j = 0; j < 8; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  cout << "  a b c d e f g h" << endl;
}

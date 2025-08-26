#include <iostream>

using namespace std;

static int mult(int lhs, int rhs) {
  return lhs * rhs;
}

int main() {
  cout << mult(6, 7) << endl;

  return 0;
}

extern int mult(int, int);

#include <iostream>

using namespace std;

inline int mult(int lhs, int rhs) {
  return lhs * rhs;
}

auto sum(int value1, int value2) -> int {
  return value1 + value2;
}

int main() {
  cout << mult(6, 7) << endl;

  return 0;
}

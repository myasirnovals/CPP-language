#include <iostream>

using namespace std;

auto mult(int lhs, int rhs) -> int {
  return lhs + rhs;
}

// this is a function overloading
int mult(int lhs, int rhs, int xhs) {
  return lhs * rhs * xhs;
}

int mult() {
  
}

int main() {
  cout << mult(6, 7) << endl;

  cout << mult(9, 10, 9) << endl;

  return 0;
}

int _myFunction();

int MYFUNCTION();

// int 921MyFunction(); // will not compile

#include <iostream>

#include "string"
#include "cstdarg"
#include "initializer_list"

using namespace std;

int sum(int first, ...) {
  int sum = 0;

  va_list args;
  va_start(args, first);

  int i = first;
  while (i != -1) {
    sum += i;
    i = va_args(args, int);
  }

  va_end(args);

  return sum;
}

int main() {
  cout << sum(-1) << endl;
  cout << sum(-6,-5,-4,-3,-2,-1) << endl;
  cout << sum(10,20,30,-1) << endl;
}

#include <iostream>
#include "initializer_list"

using namespace std;

int sum(initializer_list<int> values) {
  int sum = 0;

  values.size();  // return number of items int the list

  for(int i : values) {
    sum += i;
  }

  return sum;
}

int main() {
  cout << sum({}) << endl; // 0
  cout << sum({-6,-5,-4,-3,-2,-1}) << endl; // -21
  cout << sum({10,20,30}) << endl; // 60
}

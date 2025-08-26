#include <iostream>

using namespace std;

struct point {
  int a;
  int b;
};

void set_point(point pt);

int main() {
  point p;
  p.a = 1;
  p.b = 1;

  set_point(p);
  set_point({1, 2});
  
  return 0;
}

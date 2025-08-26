#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int breath;
    char x;
} r1;

int main() {
    r1 = {10, 5};

    printf("%lu\n", sizeof(r1));

    cout << r1.length << endl;
    cout << r1.breath << endl;

    return 0;
}

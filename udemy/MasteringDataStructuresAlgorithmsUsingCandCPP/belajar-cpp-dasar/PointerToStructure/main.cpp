#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

int main() {
    struct Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breath << endl;

    struct Rectangle *p;
    p = (struct Rectangle *) malloc(sizeof(struct Rectangle));

    p->length = 15;
    p->breath = 7;

    cout << p->length << endl;
    cout << p->breath << endl;

    return 0;
}

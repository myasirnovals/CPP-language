#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void funCallByValue(struct Rectangle r) {
    r.length = 20;

    cout << "Length " << r.length << endl;
    cout << "Breadth " << r.breadth << endl;
}

void funCallByAddress(struct Rectangle *r) {
    r->length = 35;

    cout << "Length " << r->length << endl;
    cout << "Breadth " << r->breadth << endl;
}

struct Rectangle *fun() {
    struct Rectangle *p;
    p = new Rectangle;
    // p = (struct Rectangle *) malloc(sizeof(struct Rectangle));

    p->length = 15;
    p->breadth = 7;

    return p;
}

int main() {
    struct Rectangle r = {10, 5};
    struct Rectangle *ptr = fun();

    funCallByValue(r);
    funCallByAddress(&r);

    printf("Length %d\n", r.length);
    printf("Breadth %d\n", r.breadth);

    cout << "Length " << ptr->length << endl;
    cout << "Breadth " << ptr->breadth << endl;

    return 0;
}

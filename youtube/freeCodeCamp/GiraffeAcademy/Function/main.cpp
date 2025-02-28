#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main() {
    sayHi("Yasir Noval", 18);
    sayHi("Frost Westbrook", 21);
    sayHi("Gary Sanderson", 22);

    return 0;
}

void sayHi(string name, int age) {
    cout << "Hello " << name << ", your age is " << age << " years old\n";
}

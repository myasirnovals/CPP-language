#include <iostream>

using namespace std;

// ternary operator = ?
// kondisi ? hasil_true : hasil_false

int main()
{
    int a, b;
    string hasil1, hasil2, output;

    hasil1 = "Benar";
    hasil2 = "Salah";

    a = 5;
    b = 7;

    output = (a < b) ? hasil1 : hasil2;

    cout << output << endl;

    return 0;
}

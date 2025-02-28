#include <iostream>

using namespace std;

union nama
{
    int int_value;
    char char_value[4];
};

int main()
{
    nama person;

    person.int_value = 10;

    cout << "data int_value: " << person.int_value << endl;
    cout << "data char_value: " << person.char_value << endl;

    person.char_value[0] = 'a';
    person.char_value[1] = 'b';
    person.char_value[2] = 'c';
    person.char_value[3] = 'd';

    cout << "data int_value: " << person.int_value << endl;
    cout << "data char_value: " << person.char_value << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    // looping array di c++11 keatas
    /*
        for (deklarasi variabel : array) {
            statement
        }
    */

    int arrayNilai[10] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };

    for (int nilai : arrayNilai) {
        cout << &nilai << endl;
    }

    return 0;
}

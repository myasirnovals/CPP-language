#include <iostream>
#include <string>

using namespace std;

struct aktor
{
    string nama;
    int tahun_lahir;
};

struct film
{
    string judul;
    string genre;
    int tahun;

    // struct aktor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main()
{
    aktor aktor1, aktor2;
    film film1, film2;

    // buat aktor 1
    aktor1.nama = "Moeta Kaoruko";
    aktor1.tahun_lahir = 2008;

    // buat aktor 2
    aktor2.nama = "Suzu Fuura";
    aktor2.tahun_lahir = 2009;

    // buat film
    film1.judul = "Comic Girls";
    film1.genre = "Comedy, Slice of Life";
    film1.tahun = 2018;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    film2.judul = "Comic Girls: Second Season";
    film2.genre = "Comedy, Slice of Life";
    film2.tahun = 2023;
    film2.pemeran_1 = aktor1;
    film2.pemeran_2 = aktor2;

    cout << film1.judul << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl;

    return 0;
}

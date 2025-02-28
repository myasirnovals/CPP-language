#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa {
    int NIM;
    string nama;
    string pangkat;
    string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile) {
    Mahasiswa bufferData;

    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char *>(&bufferData), sizeof(Mahasiswa));

    return bufferData;
}

void menulisData(Mahasiswa &data, fstream &myFile) {
    myFile.write(reinterpret_cast<char *>(&data), sizeof(Mahasiswa));
}

void menulisDataByPosition(int posisi, Mahasiswa &bufferData, fstream &myFile) {
    myFile.seekg((posisi - 1) * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char *>(&bufferData), sizeof(Mahasiswa));
}

int main() {
    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

    mahasiswa1.NIM = 2350081004;
    mahasiswa1.nama = "Dietfried Bougainviella";
    mahasiswa1.pangkat = "Kaigund daisha";
    mahasiswa1.jurusan = "Angkatan laut";

    mahasiswa2.NIM = 2350081005;
    mahasiswa2.nama = "Gilbert Bougainviella";
    mahasiswa2.pangkat = "Shosha";
    mahasiswa2.jurusan = "Angkatan darat";

    mahasiswa3.NIM = 2350081006;
    mahasiswa3.nama = "Claudia Hodgins";
    mahasiswa3.pangkat = "Chuusa";
    mahasiswa3.jurusan = "Angkatan darat";

    menulisData(mahasiswa1, myFile);
    menulisData(mahasiswa2, myFile);
    menulisData(mahasiswa3, myFile);

    mahasiswa2.nama = "mario";
    menulisDataByPosition(2, mahasiswa2, myFile);

    output = ambilData(2, myFile);

    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.pangkat << endl;
    cout << output.jurusan << endl;

    cin.get();
    return 0;
}
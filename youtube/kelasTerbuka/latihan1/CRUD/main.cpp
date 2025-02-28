#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa {
    int pk;
    string NIM;
    string nama;
    string jurusan;
};

int getOption();

void checkDatabase(fstream &data);

void addDataMahasiswa(fstream &data) {
    Mahasiswa inputMahasiswa;

    cout << "Nama: ";
    getline(cin, inputMahasiswa.nama);

    cout << "jurusan: ";
    getline(cin, inputMahasiswa.jurusan);

    cout << "NIM: ";
    getline(cin, inputMahasiswa.NIM);
}

int main() {
    fstream data;

    checkDatabase(data);

    int pilihan = getOption();
    char is_continue;

    enum option {
        CREATE = 1, READ, UPDATE, DELETE, FINISH
    };

    while (pilihan != FINISH) {
        switch (pilihan) {
            case CREATE:
                cout << "Menambah data mahasiswa" << endl;
                addDataMahasiswa(data);
                break;
            case READ:
                cout << "Tampilkan ata mahasiswa" << endl;
                break;
            case UPDATE:
                cout << "Ubah data mahasiswa" << endl;
                break;
            case DELETE:
                cout << "Hapus data mahasiswa" << endl;
                break;
            default:
                cout << "Pilihan tidak ditemukan" << endl;
                break;
        }
        label_continue:

        cout << "Lanjutkan? (y/N) : ";
        cin >> is_continue;

        if ((is_continue == 'y') | (is_continue == 'Y')) {
            pilihan = getOption();
        } else if ((is_continue == 'n') | (is_continue == 'Y')) {
            break;
        } else {
            goto label_continue;
        }
    }

    cout << "Alhir dari program" << endl;

    cin.get();
    return 0;
}

int getOption() {
    int input;

    cout << "\nProgram CRUD Data Mahasiswa" << endl;
    cout << "=============================" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Tampilkan data mahasiswa" << endl;
    cout << "3. Ubah data mahasiswa" << endl;
    cout << "4. Hapus data mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=============================" << endl;
    cout << "pilih [1-5]? : ";

    cin >> input;

    return input;
}

void checkDatabase(fstream &data) {
    data.open("data.bin", ios::out | ios::in | ios::binary);

    // check file ada atau tidak
    if (data.is_open()) {
        cout << "database ditemukan" << endl;
    } else {
        cout << "database tidak ditemukan, buat database baru" << endl;
        data.close();

        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}
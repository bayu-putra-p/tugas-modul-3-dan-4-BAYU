#include <iostream>

using namespace std;

int main() {
    double harga, diskon, jumlahDiskon, hargaSetelahDiskon;

    cout << "\n=MASUKKAN=\n";
    cout << "Masukkan harga (Rp) = ";
    cin >> harga;

    cout << "Diskon barang (%) = ";
    cin >> diskon;

    jumlahDiskon = harga * (diskon / 100);
    hargaSetelahDiskon = harga - jumlahDiskon;

    cout << "\nHASIL\n";
    cout << "Jumlah diskon        : Rp " << jumlahDiskon << endl;
    cout << "Harga setelah diskon : Rp " << hargaSetelahDiskon << endl;

    return 0;
}


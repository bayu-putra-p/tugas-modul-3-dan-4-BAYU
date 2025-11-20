#include <iostream>
using namespace std;

int main() {
	double nilai;
	cout << "===PROGRAM PENENTUAN NILAI MUTU===" << endl;
	cout << "Masukkan nilai angka = ";
	cin >> nilai;

	cout << "\n==HASIL==" << endl;
	cout << "Nilai : ";

	if (nilai > 89) {
		cout << "A" << endl;
		cout << "Keterangan : (Naik kelas)" << endl;
	}
	else if (nilai > 80 && nilai <= 89) {
		cout << "B" << endl;
		cout << "Keterangan : (Naik kelas)" << endl;
	}
	else if (nilai > 70 && nilai <= 80) {
		cout << "C" << endl;
		cout << "Keterangan : (Naik kelas)" << endl;
	}
	else if (nilai > 60 && nilai <= 79) {
		cout << "D" << endl;
		cout << "Keterangan : (Tinggak kelas)" << endl;
	}
	else if (nilai <= 60) {
		cout << "E" << endl;
		cout << "Keterangan : (Tinggal kelas)" << endl;
	}
	return 0;

	

}
	

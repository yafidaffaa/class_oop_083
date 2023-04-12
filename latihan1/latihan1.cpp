#include <iostream>
using namespace std;

class mahasiswa {
private :
	double nim;
	char nama[20];
	float nilai;
public :
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cin.ignore(1, '\n');
		cout << "Masukan Nama : ";
		cin.getline(nama,20);
		cout << "Masukan Nilai : ";
		cin >> nilai;
	}
	void printData();
};

void mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNama : " << nama;
	cout << "\nnilai : " << nilai;
}

class mataKuliah {
private :
	string kode;
	char namaMK[20];
	int sks;
public :
	void inputMK() {
		cout << "\n\nMasukan kode matakuliah : ";
		cin >> kode;
		cin.ignore(1, '\n');
		cout << "Masukan nama matakuliah : ";
		cin.getline(namaMK,20);
		cout << "Masukan SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nKode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaMK;
		cout << "\nSKS : " << sks;
	}
};

int main() {
	mahasiswa mhs;
	mataKuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();
}
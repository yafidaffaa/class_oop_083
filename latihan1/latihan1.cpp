#include <iostream>
using namespace std;

class mahasiswa {
private :
	double nim;
	char nama;
	float nilai;
public :
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
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
	string namaMK;
	int sks;
public :
	void inputMK() {
		cout << "\n\nMasukan kode matakuliah : ";
		cin >> kode;
		cout << "Masukan nama matakuliah : ";
		cin >> namaMK;
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
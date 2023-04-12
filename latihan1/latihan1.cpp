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
};
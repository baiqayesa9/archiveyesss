#include <iostream>
using namespace std;

class Hitung {
public:
	int a, b, c;
	int jumlah;	

	void input() {
		
		cout << "masukkan nilai a: ";
		cin >> a;
		cout << "masukkan nilai b: ";
		cin >> b;
		cout << "masukkan nilai c: ";
		cin >> c;
	}

	void proses() {	
		jumlah = a + b + c;
	}

	void output() {
		cout << "nilai a : " << a << endl;
		cout << "nilai b : " << b << endl;
		cout << "nilai c : " << c << endl;
		cout << "jumlah : " << jumlah << endl;
	}
};

int main () {
	
	Hitung X;
	
	cout << "program menghitung jumlah 3 integer\n";
	cout << "selamat berkarya\n";
	
	X.input();
	X.proses();
	X.output();
	
	return 0;
	
}

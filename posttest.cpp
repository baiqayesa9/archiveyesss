#include <iostream>
#include <cmath>
using namespace std;

class Hitung {
public:
	int x1, x2, y1, y2, X, Y;
	int titikTengah;	

	void input() {
		cout << "masukkan x1: ";
		cin >> x1;
		cout << "masukkan y1: ";
		cin >> y1;
		cout << "masukkan x2: ";
		cin >> x2;
		cout << "masukkan y2: ";
		cin >> y2;
	}

	void proses() {	
		X = (x1 +x2) /2;
		Y = (y1 +y2) /2;
	}

	void output() {
		cout << "titik tengah (M) " << "(" << X << "," << Y << ")"<< endl;
	}
};

int main () {
	
	Hitung X;
	
	cout << "Program Menghitung Titik Tengah\n";
	
	
	X.input();
	X.proses();
	X.output();
	
	return 0;
}

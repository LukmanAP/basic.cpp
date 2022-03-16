#include <iostream>

using namespace std;

double hitungLuas(double l, double p);

int main() {
	double panjang, luas, hasil;

	cout << "masukan panjang : ";
	cin >> panjang ;
	cout << "Masukan luas : ";
	cin >> luas;

	hasil = hitungLuas(luas, panjang);
	cout << hasil << endl;

	return 0;
}

double hitungLuas(double l, double p){
	double hitung = l * p ;
	return hitung;
}
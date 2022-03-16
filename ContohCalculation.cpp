#include <iostream>

using namespace std;

int main() {
	cout << "\n INI ADALAH CONTOH CALCULATION SEDRHANA \n";

	float a,b,hasil;
	char aritmatika;

	cout << "Masukan Nilai Pertama : ";
	cin >> a;
	cout << "Masukan Aritmatika +, -, x, :, : " ;
	cin >> aritmatika;
	cout << "MAasukan Nilai kedua : " ;
	cin >> b ;

	if (aritmatika == '+') {
		hasil = a + b ;
	} else if (aritmatika == '-') {
		hasil = a - b ;
	} else if (aritmatika == 'x') {
		hasil = a * b ;
	} else if (aritmatika == ':') {
		hasil = a / b ;
	} else {
		cout << "Aritmatika yang anda input Salah" << endl;
	}


	if (hasil != 0) {
		cout << "jadi hasil dari ";
		cout  << a << " " << aritmatika << " " << b << " = " << hasil;
	}

	return 0;

}

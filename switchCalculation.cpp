#include <iostream>

using namespace std;

int main() {
	cout << "Calculation Menggunakan swicth case\n\n" << endl;

	float a,b,hasil ;
	char aritmatika ;

	cout << "Masukan Nilai Pertama : ";
	cin >> a ;
	cout << "Masukan Nilai Aritmatika : ";
	cin >> aritmatika ;
	cout << "Masukan Nilai Kedua : ";
	cin >> b ;

	switch (aritmatika) {
		case '+' :
		hasil = a + b ; break;
		case '-' :
		hasil = a - b ; break;
		case 'x' :
		hasil = a * b ; break;
		case ':' :
		hasil = a / b ; break;
		default :
		cout << "Maaf oprator yang anda input salah" << endl;
	}


if ( hasil != 0 ) {
	cout << "Jadi, Hasil dari " << a << " " << aritmatika << " " << b << " = " << hasil << endl;
}
return 0;

}
#include <iostream>

using namespace std;


int tambah(int a, int b) {
	int hasil;
	hasil = a + b ;
	cout << "hasil jika di tambah : " << hasil << endl;
	return hasil;
}
int kali(int a, int b) {
	int hasil;
	hasil = a * b ;
	cout << "Hasil jika di kali : "<< hasil << endl;
	return hasil;
}
int  kurang(int a, int b) {
	int hasil;
	hasil = a - b ;
	cout << "hasil jika di kurangin : "<< hasil << endl;
	return hasil;
}
int bagi(int a, int b) {
	int hasil;
	hasil = a / b ;
	cout << "hasiljika di bagi : "<< hasil << endl;
	return hasil;
}

void Tsemua(int a,int b) {
	kali(a,b);
	tambah(a,b);
	kurang(a,b);
	bagi(a,b);


}


int main() {
	int a, b;
	cout << "Masukan nIlai pertama : ";
	cin >> a ;
	cout << "Masukan Nilai pertama : ";
	cin >> b ;

	Tsemua(a,b);

	cin.get();
	return 0;
}

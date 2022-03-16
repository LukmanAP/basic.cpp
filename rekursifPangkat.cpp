#include <iostream>

using namespace std;

int pangkatRekursif(int a, int b) {
	if (b <= 1) {
		cout << "Akhir dari rekursif\n";
		return a;
	} else {
		cout << "rekursif\n";
		return a * pangkatRekursif(a,(b-1));
	}
}

int main() {
	int a;
	int b;

	cout << "angka : ";
	cin >> a;
	cout << "pangkat : ";
	cin >> b;

	cout << "hasil literasi = " << pangkatRekursif(a,b) << endl;
	
	cin.get();
	return 0;
}
#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "Masukan Nilai Angka : " ;
	cin >> a ;

	if (a == 3) {
		cout << "Nilai ini adalah 3" << endl;
	} else if (a == 2) {
		cout <<"Nilai ini adalah 2" << endl;
	} else if (a == 1) {
		cout << "Nilai ini adalah 1" << endl;
	} else {
		cout << "Nilai ini buka 3,2 ataupun 1" << endl;
	}
	

	cout << " selesai" << endl;

	cin.get();
	return 0;
}
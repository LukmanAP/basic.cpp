#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Masukan jumlah panjang : ";
	cin >> n;

	cout << "Pola 1" << endl;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++ ) {
			cout << "* ";
		}
		cout << endl;
	}

	cout << "Pola 2" << endl;

	int z = n ;
	for(int i = 0; i < n; i++) {
		for(int j = z; j > 0 ; j--){
			cout << "* ";
		}
		z--;
		cout << endl;
	}

	cout << "pola 3" << endl;

	int c = n ;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++ ) {
			cout << "  ";
		}
		for(int k = c; k >= 1; k--) {
			cout << "* ";
		}
		c--;
		cout << endl;
	}


	cout << "pola 4" << endl;
	int r = n-1;
	int f = r;
	for(int i = 0; i < n; i++) {
		for(int j = f; j > 0; j--) {
			cout << "  ";
		}
		for(int m = 0; m <= i; m++) {
			cout << "* ";
		}

		cout << endl;
		f--;
	}
}

#include <iostream>

using namespace std;

int main() {
	int a = 1;
	int b, hasil;
	cout << "masukan ingin berapa kali pengulangan = ";
	cin >> b;

	do {
		cout << " ini perungan ke ";
		cout << a << endl;
		a++ ;
	} while ( a <= b);

	cout << "SELESAI" << endl;
	cin.get();
	return 0;
}
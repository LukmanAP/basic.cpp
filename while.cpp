#include <iostream>

using namespace std;

int main() {
	int a = 1;
	int b;

	cout << "Masukan iai perulangan : ";
	cin >> b ;

	while(a <= b) {
		cout << "ini perulangan ke - " << a << endl;
		a += 1;
	}

	cout << "SELESAI" << endl;

	cin.get();
	return 0;
}
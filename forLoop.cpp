#include <iostream>

using namespace std;

int main() {
	// for (inisialisasi; loop kondisi; increment) {
	//      statement
	// }

	cout << "LOOP ke 1 \n";
	for(int i = 1; i <= 10; i++) {
		cout << i << endl;
	}
	cout << "\nLOOP ke 1 \n";
	for(int i = 1; i <= 10; i+=2) {
		cout << i << endl;
	}
	cout << "\nLOOP ke 1 \n";
	for(int i = 1; i >= -10; i--) {
		cout << i << endl;
	}
	cout << "\nLOOP ke 1 \n";
	int total = 0;
	for(int i = 1; i <= 10; i++) {
		total += i;
		cout << i << " || " << total << endl;
	}


return 0;
}
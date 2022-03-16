#include <iostream>
using namespace std;

int main() {
	// Operator LOGIKA not, and, or

	int a = 2;
	int b = 3;
	bool hasil;

	//not (!)
	hasil = !(a == 3);

	//and (and/&&)
	hasil = (a == 2) and (b == 3); //true and true = true
	// true and false = false
	// false and true = false
	// false and false = false

	//or (or/||)
	hasil = (a == 2) or (b == 3); //true or true = true
	// true or false = true
	// false or true = true
	// false or false = false

	cin.get();
	return 0;
}
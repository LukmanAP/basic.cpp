#include <iostream>



using namespace std;

int main() {

	//assignment
	int a = 10;
	cout << "Nilai Awal dari a adlah : " << a << endl;

	// assignment operator
	// variabel = variabel operator ekspresi
	//     a    =    a        -        3
	// variabel  operator= ekspresi
	//     a            +=    3

	a += 3;
	cout << "ditambah 3 menjadi " << a << endl;

	a -= 5 ;
	cout << "dikurang 5 menjadi " << a << endl;

	cout << a << endl;
	return 0;

}
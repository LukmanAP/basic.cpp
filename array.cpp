#include <iostream>

using namespace std;

int main() {

	int Nilai[5] = {1,2,3,4,5};

	cout << &Nilai[0] << " Nilainya adalah : " << Nilai[0] << endl;
	cout << &Nilai[1] << " Nilainya adalah : " << Nilai[1] << endl;
	cout << &Nilai[2] << " Nilainya adalah : " << Nilai[2] << endl;
	cout << &Nilai[3] << " Nilainya adalah : " << Nilai[3] << endl;
	cout << &Nilai[4] << " Nilainya adalah : " << Nilai[4] << endl;

	cout<<endl;
	Nilai[2] = 7;
	cout << &Nilai[0] << " Nilainya adalah : " << Nilai[0] << endl;
	cout << &Nilai[1] << " Nilainya adalah : " << Nilai[1] << endl;
	cout << &Nilai[2] << " Nilainya adalah : " << Nilai[2] << endl;
	cout << &Nilai[3] << " Nilainya adalah : " << Nilai[3] << endl;
	cout << &Nilai[4] << " Nilainya adalah : " << Nilai[4] << endl;

	cout<<endl;
	int *ptr = Nilai;
	*(ptr + 3) = 10;
	cout << &Nilai[0] << " Nilainya adalah : " << Nilai[0] << endl;
	cout << &Nilai[1] << " Nilainya adalah : " << Nilai[1] << endl;
	cout << &Nilai[2] << " Nilainya adalah : " << Nilai[2] << endl;
	cout << &Nilai[3] << " Nilainya adalah : " << Nilai[3] << endl;
	cout << &Nilai[4] << " Nilainya adalah : " << Nilai[4] << endl;


	cout<<endl;
	cout << "julah dari array adlah " << sizeof(Nilai)/sizeof(int) << endl;






	return 0;
}
#include <iostream>

using namespace std;
int main() {
	
	int a;
	a = 10; //ini adalah deklarasi
	cout << a << std::endl;

	int b;
	cout << "masukan nilai : ";
	cin >> b;
	cout << "nilai yang anda masukan adalah :";
	cout << b << endl;

	std::cin.get();
	return 0;
} 
/* jadi deklarasi adalah memasukan nilai
 ke variabel kosong*/
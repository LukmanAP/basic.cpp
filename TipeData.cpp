#include <iostream>



using namespace std;

int main() {
	//Bilangan Bulat
	int a = 1; // 32 bit
	long a = 1; //memiliki nilai yang pabjang
	short a = 1; //memiliki nilain yang pendek
	unsigned int a = 1; //antrinya tidak bertanda + maupun -

	//Bilanga Desilmal
	float d =1.0;
	double d =2.5;

	//character
	char f = "a"; // 1bit

	//boolean
	bool g = true; //true/false   
	cout << "Nilai : " << a << endl;
	cout << "ukuran " << sizeof(a) << " byte" << endl; //melihat ukuran variabel

	cin.get();
	return 0;
}
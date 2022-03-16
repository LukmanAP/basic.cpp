#include <iostream>

using namespace std;

int main() {

	int a;
	int *p;
	p = &a;
	a = 5;

	cout << "print p : " << p << endl;
	cout << "print &a : " << &a << endl;
	cout << "print &p : " << &p << endl;
	cout << "print *p : " << *p << endl;
	cout << "print a : " << a << endl;

	*p = 10;
	cout << "print a : " << a << endl;
	cout << "print *p : " << *p << endl;

 	a = 12;
 	cout << "print a : " << a << endl;
 	cout << "print *p : " << *p << endl;

	cin.get();
	return 0;
}
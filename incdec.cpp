#include <iostream>

using namespace std;

int main() {
// increment and deckrement
// preincrement dan postincrement

int a = 5;
int b = 5;

//postincrement
cout << "hasil : " << a << endl;
cout << "hasil : " << a++ << endl; //di print deluan lalu di tambah
cout << "hasil : " << a << endl << endl;

//preincrement
cout << "hasil : " << b << endl;
cout << "hasil : " << ++b << endl; //di tambah deluan lalu di print
cout << "hasil : " << b << endl;

cin.get();
return 0;
}
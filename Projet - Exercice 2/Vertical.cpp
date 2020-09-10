//But : Écrire un programme qui vérifie que le nombre entré est de 5 chiffre et qui va les placer sur 5 lignes verticalement
//Auteur : Frédéric Charron
//Date : 08/09/2020

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int a, b, c, d, e;

	a = _getch();
	cout << char(a);
	b = _getch();
	cout << char(b);
	c = _getch();
	cout << char(c);
	d = _getch();
	cout << char(d);
	e = _getch();
	cout << char(e);
	
	cout << "\nOutput:\n";
	cout << char(a) << "\n";
	cout << char(b) << "\n";
	cout << char(c) << "\n";
	cout << char(d) << "\n";
	cout << char(e) << "\n";
	return 0;
}
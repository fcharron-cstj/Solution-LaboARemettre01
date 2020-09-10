//But : Créer un programme qui peut déterminer si le nombre que l'utilisateur entre dans le programme est pair ou impair.
//Auteur : Frédéric Charron
//Date : 08/09/2020

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int num;
	cin >> num;				//Le nombre qu'on entre dans le programme
	if (num % 2 == 0)
		cout << num << " est pair";
	else
		cout << num << " est impair";

	//Test1 :  12 --> est pair
	//Test2 :  13 --> est impair

	return 0;
}
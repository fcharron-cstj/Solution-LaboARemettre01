//But : Cr�er un programme qui peut d�terminer si le nombre que l'utilisateur entre dans le programme est pair ou impair.
//Auteur : Fr�d�ric Charron
//Date : 08/09/2020

#include <iostream>
								//inclure les communications entre l'utilisateur et le programme
using namespace std;		

int main()
{
	setlocale(LC_ALL, ""); 

	int num;
	cin >> num;				//Le nombre qu'on entre dans le programme
	if (num % 2 == 0)
		cout << num << " est pair";	//Si le nombre entier se divise par 2 alors il envoie le message <<"nombre" est pair.>>
	else
		cout << num << " est impair"; //Sinon, il envoie le message <<"nombre" est impair.>>

	//Test1 :  12 --> est pair
	//Test2 :  13 --> est impair

	return 0;
}
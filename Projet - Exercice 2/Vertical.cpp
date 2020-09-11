//But : Écrire un programme qui vérifie que le nombre entré est de 5 chiffre et qui va les placer sur 5 lignes verticalement
//Auteur : Frédéric Charron
//Date : 08/09/2020

#include <iostream>



int main()
{
	setlocale(LC_ALL, "");

	int nombre;

	std::cout << " Veuillez entrer un nombre entier de 5 chiffres ";

	std::cin >> nombre;

	if (nombre >= 10000)

	{

		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
	}
	else
	{
		std::cout << " Le nombre n'est pas de 5 chiffres";


	}

	return 0;
}

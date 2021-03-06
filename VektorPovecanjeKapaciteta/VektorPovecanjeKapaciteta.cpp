// VektorPovecanjeKapaciteta.cpp : Radni zadatak RVS18-SPA-Pred-04-Vektor 
//

#include "stdafx.h"
#include"iostream"
#include"vector"


int main()
{
	// Kreiranje praznog vektora

	std::vector<double> prazanVektor;

	// Kreiranje vektora od 5 elemenata s zadanom vrijednosti 10

	std::vector<double> punVektor(5, 10);

	//Umetanje bilo gdje u vektor (ne preporuča se umetanje bilo gdje u listu, osim na kraj liste, jer mijenja poziciju elemenata, eventualno povećava vektor...)
	//Konkretan primjer umeće 999 na poziciju 3 (index = 3)

	std::vector<double> vektorUmetanjeElementa = { 1,2,3,4,5,6,7,8,9 };
	vektorUmetanjeElementa.insert(vektorUmetanjeElementa.begin() + 3, 999);
	//Ispis vektora nakon umetanja
	for each (double v in vektorUmetanjeElementa)
	{
		std::cout << v << ", ";

	}
	std::cout << "\n";

	// Dohvat veličine vektora

	std::vector<double> velicinaVektora = { 1,2,3,4,5,6,7,8 };
	velicinaVektora.size();

	// Ispis velicine vektora

	std::cout << "Velicina vektora je: " << velicinaVektora.size() << "\n";

	// Dohvat elementa na mjestu i

	std::vector<double> dohvatElemntaVektora = { 1,2,3,4,5,6,7,8,9 };
	dohvatElemntaVektora.at(3);

	//Ispis elementa s indexom 3

	std::cout << "Element u listi s indexom 3 je: " << dohvatElemntaVektora.at(3) << "\n";

	// Povećanje kapaciteta vektora za 33% konstantno 
 
	std::vector<double> promjenaKapacitetaVektora = { 1,2,3,4,5,6,7,8,9,10 };
	promjenaKapacitetaVektora.reserve(promjenaKapacitetaVektora.size() * 1.33);

	// Ispis kapaciteta vektora

	std::cout << promjenaKapacitetaVektora.capacity() << "\n";

	return 0;
}


// Aufgabe_6_5_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <string>

enum land
{
	Deutschland = 1,
	Oesterreich = 2,
	Schweiz = 3
};

struct adresse
{
	std::string Vorname;
	std::string Nachname;
	std::string Strasse;
	int Hausnummer;
	int Postleitzahl;
	std::string Ort;
	land Land;
};

struct kreditkartedaten
{
	int Kreditkartennummer;
	int Gueltigkeitsdatum;
};

struct bestellung
{
	int Kundennumer;
	kreditkartedaten Kreditdaten;
	adresse Adresse;
	std::string Ware;
};




void confirm(bestellung &a)
{
	std::cout << "---------------------------------------------------------------------------" <<  std::endl;
	std::cout << "Vielen Dank fuer Ihre Bestellung hier nochmal alle Daten zusammengefasst:  " << std::endl;

	std::cout << "Sie haben folgenden Artikel bestellt: " << a.Ware << std::endl;

	std::cout << "Vorname: "<< a.Adresse.Vorname << std::endl;

	std::cout << "Nachname: " << a.Adresse.Nachname << std::endl;

	std::cout << "Strasse: " << a.Adresse.Strasse << std::endl;

	std::cout << "Hausnummer: " << a.Adresse.Hausnummer << std::endl;

	std::cout << "Postleitzahl: " << a.Adresse.Postleitzahl << std::endl;

	std::cout << "Ort: " << a.Adresse.Ort << std::endl;

	if (a.Adresse.Land == 1)
	{
		std::cout << "Land: Deutschland" << std::endl;
	}
	else if (a.Adresse.Land == 2)
	{
		std::cout << "Land: Oesterreich" << std::endl;
	}
	else if (a.Adresse.Land == 3)
	{
		std::cout << "Land: Schweiz" << std::endl;
	}

	std::cout << "Kreditkartennummer: " << a.Kreditdaten.Kreditkartennummer << std::endl;

	std::cout << "Gueltigkeitsdatum: " << a.Kreditdaten.Gueltigkeitsdatum << std::endl;

}


int main()
{
	int a = 0;
	bestellung MeineBestellung;

	std::cout << "Herzlich Wilkommen!" << std::endl;
	std::cout << "Welchen Artikel moechten Sie bestellen?" << std::endl;
	std::cin >> MeineBestellung.Ware;

	std::cout << "Wir benoetigen um die Bestellung abzuschließen weitere Informationen." << std::endl;

	std::cout << "----------Adressdaten----------" << std::endl;
	std::cout << "Vorname: " << std::flush;
	std::cin >> MeineBestellung.Adresse.Vorname;
	std::cout << "Nachname: " << std::flush;
	std::cin >> MeineBestellung.Adresse.Nachname;
	std::cout << "Strasse: " << std::flush;
	std::cin >> MeineBestellung.Adresse.Strasse;
	std::cout << "Hausnummer: " << std::flush;
	std::cin >> MeineBestellung.Adresse.Hausnummer;
	std::cout << "Postleitzahl: " << std::flush;
	std::cin >> MeineBestellung.Adresse.Postleitzahl;
	std::cout << "Ort: " << std::flush;
	std::cin >> MeineBestellung.Adresse.Ort;
	std::cout << "Bitte waehlen Sie ihr Land: " << std::endl;
	std::cout << "[1] Deutschland" << std::endl;
	std::cout << "[2] Oesterreich" << std::endl;
	std::cout << "[3] Schweiz" << std::endl;
	std::cin >> a;

	if (a == 1)
	{
		MeineBestellung.Adresse.Land = Deutschland;
	}
	else if (a == 2)
	{
		MeineBestellung.Adresse.Land = Oesterreich;
	}
	else if (a == 3)
	{
		MeineBestellung.Adresse.Land = Schweiz;
	}
	else
	{
		std::cout << "Keine gueltige Eingabe! Vorgang abgebrochen" << std::endl;
	}


	std::cout << "----------Bezahlart----------" << std::endl;
	std::cout << "Bitte geben Sie ihre Kreditkartennummer ein: " << std::flush;
	std::cin >> MeineBestellung.Kreditdaten.Kreditkartennummer;
	std::cout << "Bitte geben Sie das Gueltigkeitsdatum ein: " << std::flush;
	std::cin >> MeineBestellung.Kreditdaten.Gueltigkeitsdatum;

	confirm(MeineBestellung);


}
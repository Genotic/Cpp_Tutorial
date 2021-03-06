// Dynamischer_Speicher.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <string>

struct adresse
{
	std::string Name;
	std::string Ort;
	std::string Telefonnummer;
};

int main()
{
	int i;

	std::cout << "Wie viele Adressen moechten Sie speichern? " << std::flush;
	std::cin >> i;

	adresse* Adressen = new adresse[i];  //new reserviert dynamisch Speicher. Hinter new wird festgelegt wie viel Speicher allokiert wird.

	for (int j = 0; j < i; ++j)
	{
		Adressen[j].Name = "Mattias Koelbl";
		Adressen[j].Ort = "Nuernberg";
		Adressen[j].Telefonnummer = "1234567890";
	}

	delete[] Adressen; //Der reservierte Speicher wird wieder freigegeben
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.

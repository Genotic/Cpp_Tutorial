// Aufgabe_7_6_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	int i, b;

    std::cout << "Wie gross soll das Array sein?" << std::endl;
	std::cin >> i;

	short *a = new short[i];

	for (int j = 0 ; j < i; ++j)
	{
		if (j % 2 == 0)
		{
			a[j] = 0;
		}
		else if (j % 2 == 1)
		{
			a[j] = 1;
		}

		std::cout << a[j] << std::flush;
	}


	//b = 0 % 2;
	//std::cout << b << std::endl;
	//b = 1 % 2;
	//std::cout << b << std::endl;
	//b = 2 % 2;
	//std::cout << b << std::endl;
	//b = 5 % 2;
	//std::cout << b << std::endl;
	//b = 7 % 2;
	//std::cout << b << std::endl;
	//b = 8 % 2;
	//std::cout << b << std::endl;

	//std::cout << *a << std::endl;

	delete[] a;
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

// Aufgabe_4_4.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	int buffer[4], k = 0;


	std::cout << "Bitte geben Sie vier Zahlen ein: " << std::endl;
	std::cin >> buffer[0];
	std::cin >> buffer[1];
	std::cin >> buffer[2];
	std::cin >> buffer[3];


	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j >= 0; j--)
		{
			if ((buffer[i] > buffer[j]) && ((buffer[i] - buffer[j]) != 0))
			{
				k++;
			}
		}

		/*std::cout << "Im Buffer " << i << std::flush;
		std::cout << " stehen  " << k << std::flush;
		std::cout << " groessere Zahlen  "  << std::endl;*/


		if (k == 0)
		{
			std::cout << "Im Buffer " << i << std::flush;
			std::cout << " steht die kleinste Zahl: " << buffer[i] << std::endl;
		}
		else if (k == 3)
		{
			std::cout << "Im Buffer " << i << std::flush;
			std::cout << " steht die groesste Zahl: " << buffer[i] << std::endl;
		}

		k = 0;

	}

	

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

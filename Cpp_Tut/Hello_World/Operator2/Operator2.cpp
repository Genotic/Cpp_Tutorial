// Operator2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	char insert[5];
	int control, qsumm, a, b, c, d;

	std::cout << "Bitte geben Sie eine vierstellig Zahl ein: " << std::endl;
	std::cin.getline(insert, sizeof(insert));
	control = sizeof(insert) - 1;

	std::cout << "Im Array steht: " << insert << std::endl;

	//qsumm = static_cast<int>(insert[0]) + static_cast<int>(insert[1]) + static_cast<int>(insert[2]) + static_cast<int>(insert[3]);

	a = static_cast<int>(insert[0]) - 48;
	b = static_cast<int>(insert[1]) - 48;
	c = static_cast<int>(insert[2]) - 48;
	d = static_cast<int>(insert[3]) - 48;

	qsumm = a + b + c + d;

	std::cout << "Im Array[0] steht: " << a << std::endl;
	std::cout << "Im Array[1] steht: " << b << std::endl;
	std::cout << "Im Array[2] steht: " << c << std::endl;
	std::cout << "Im Array[3] steht: " << d << std::endl;
	std::cout << "Im Array[4] steht: " << insert[4] << std::endl;

	std::cout << "Die Anzahl der eingegebenen Zeichen ist " << control << std::endl;
	std::cout << "Die Quersummer ist: " << qsumm << std::endl;
	//std::cin.getline(insert, sizeof(insert));

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

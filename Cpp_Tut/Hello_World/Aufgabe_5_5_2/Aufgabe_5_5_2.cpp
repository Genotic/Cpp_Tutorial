// Aufgabe_5_5_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

char buffer[5];
char buffer2[sizeof(buffer)];
int j = sizeof(buffer) - 2;

void swap(char &a)
{
	if (j >= 0)
	{
		buffer2[j] = a;
	}
	
	j--;
}

int main()
{


    std::cout << "Bitte geben sie eine Zahl ein: \n"; 
	std::cin.getline(buffer, sizeof(buffer));

	std::cout << "Groesse des Buffers " << sizeof(buffer) << std::endl;



	for (int i = 0; i <= (sizeof(buffer) - 2); i++)
	{
		swap(buffer[i]);
		std::cout << "Uebergabe vom Wert " << buffer[i] << std::endl;
	}


	std::cout << "Die gedrehte Zahl: " << buffer2 << std::endl;


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

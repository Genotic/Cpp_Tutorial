// Strukturen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <string>


struct adresse
{
	std::string Anrede;
	std::string Vorname;
	std::string Nachname;
	std::string Strasse;
	int Hausnummer;
	int Postleitzahl;
	std::string Ort;
	std::string Land;
};

struct bestellung
{
	int Kundennummer;
	adresse Adresse;
	std::string Ware;
};

int main()
{
	adresse MeineAdresse;
	bestellung MeineBestellung;

	MeineAdresse.Anrede = "Herr";
	MeineAdresse.Vorname = "James";
	MeineAdresse.Nachname = "Bond";
	MeineAdresse.Strasse = "Schlossallee";
	MeineAdresse.Hausnummer = 1;
	MeineAdresse.Postleitzahl = 12345;
	MeineAdresse.Ort = "Entenhausen";
	MeineAdresse.Land = "Deutschland";

	MeineBestellung.Adresse.Vorname = "Mattias";
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

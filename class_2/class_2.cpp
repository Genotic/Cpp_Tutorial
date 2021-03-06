// class_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

class DateClass			 // member are private by default
{
	int m_day;			// private by default, can only be accessed by other members
	int m_month;		// private by default, can only be accessed by other members
	int m_year;			// private by default, can only be accessed by other members

public:

	void setDate(int day, int month, int year)
	{
		m_day = day;
		m_month = month;
		m_year = year;
	}

	void print()
	{
		std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
	}

	void copyFrom(const DateClass &d)
	{
		m_day = d.m_day;
		m_month = d.m_month;
		m_year = d.m_year;
	}

};

int main()
{
	DateClass date;

	date.setDate(19, 9, 2018);		// okay because setDate() is public

	DateClass copy;
	copy.copyFrom(date);			// okay, because copyFrom() is public
	copy.print();


	return 0;
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

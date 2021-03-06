// class_task_1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

class Point3d
{
	float m_x;
	float m_y;
	float m_z;

public:

	void setValues(float a, float b, float c)
	{
		m_x = a;
		m_y = b;
		m_z = c;

	}

	void print()
	{
		std::cout << "x: " << m_x << std::endl;
		std::cout << "y: " << m_y << std::endl;
		std::cout << "z: " << m_z << std::endl;
	}

	int isEqual(const Point3d &p)
	{
		if (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z)
		{
			return 1;
		}
		else
		{
			return 0;
		}

	}

};

int main()
{

	Point3d point1;
	point1.setValues(1.0, 2.0, 3.0);

	Point3d point2;
	point2.setValues(1.0, 2.0, 3.0);

	if (point1.isEqual(point2))
	{
		std::cout << "point1 and point 2 are equal" << std::endl;
	}
	else
	{
		std::cout << "point1 and point 2 are not equal" << std::endl;
	}

	Point3d point3;
	point2.setValues(4.0, 5.0, 6.0);

	if (point1.isEqual(point3))
	{
		std::cout << "point1 and point 3 are equal" << std::endl;
	}
	else
	{
		std::cout << "point1 and point 3 are not equal" << std::endl;
	}


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

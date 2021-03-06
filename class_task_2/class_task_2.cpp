// class_task_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

class Stack
{
	static const int m_maxarraylength{ 10 };
	int m_array[m_maxarraylength];

	int cnt = 0;

public:

	void reset()
	{
		for (int m_i = 0; m_i < m_maxarraylength; m_i++)
		{
			m_array[m_i] = 0;
		}

		cnt = 0;
	}

	int push(int a)
	{
		
		if (cnt < m_maxarraylength)
		{
			m_array[cnt] = a;
			cnt++;
			return 1;
		}
		else
		{
			std::cout << "Array is already full" << std::endl;
			return 0;
		}

	}

	void pop()
	{
		
		if (cnt == 0)
		{
			std::cout << "The array is empty" << m_array[cnt] << std::endl;
		}
		else
		{
			std::cout << "The currently stack value is: " << m_array[cnt-1] << std::endl;
			m_array[cnt - 1] = 0;
			cnt--;
		}

	}

	void print()
	{
		for (int m_i = 0; m_i < m_maxarraylength; m_i++)
		{
			if (m_array[m_i] != 0)
			{
				std::cout << m_array[m_i];
			}
			
		}

		std::cout << std::endl;
	}
};

int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

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

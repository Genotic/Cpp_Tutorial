// Praeprozessor.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>

#define DEBUG 2

int main()
{
	char buffer[20];
	int number;

	std::cout << "Geben Sie eine Zahl ein: " << std::flush;
	std::cin.get(buffer, sizeof(buffer));

#if DEBUG > 0
	std::cout << "DEBUG: " << buffer << std::endl;
#endif
	number = std::atoi(buffer);
#if DEBUG > 1
	std::cout << "DEBUG: " << number << std::endl;
#endif

}



// Referenzoperator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

void set(int &a) // Der Funktion wird die Referenz zur Variable x übergeben d. h. die Änderung der Variable a wird auf die Variable x übergeben.
{
	a = 10;
}

int main()
{
	int x = 5;

	set(x);
	std::cout << x << std::endl;
}
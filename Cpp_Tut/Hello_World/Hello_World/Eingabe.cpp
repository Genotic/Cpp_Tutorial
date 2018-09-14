
#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std::string vorname;
	std::string nachname;

	std::cout << "Bitt geben Sie Ihren Vor- und Nachnamen ein!" << std::endl;
	std::cin >> vorname;
	std::cin >> nachname;

	std::cout << "Sie heissen " << vorname << " " << nachname << std::endl;

}
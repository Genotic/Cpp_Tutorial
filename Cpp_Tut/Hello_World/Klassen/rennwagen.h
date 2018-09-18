#pragma once

#include "pch.h"

class rennwagen
{
	int Kmh;

public:
	rennwagen() : Kmh(0)
	{
	}

	void beschleunigen(int kmh)
	{
		Kmh += kmh;
	}

	void bremsen()
	{
		Kmh -= 50;
		if (Kmh < 0)
		{
			Kmh = 0;
		}
	}
};
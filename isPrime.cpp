#include "stdafx.h"
#include <iostream>

bool isPrime(int x)
{
	if (x == 2)
		return 1;

	if (x == 3)
		return 1;

	if (x == 5)
		return 1;

	if (x == 7)
		return 1;

	else
		return 0;
}
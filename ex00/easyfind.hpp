#pragma once

#include <iostream>

template <typename T>
int	easyfind(T& t, int n)
{
	for (int i = 0; t[i]; i++)
		if (t[i] == n)
			return i;
	return 0;
}
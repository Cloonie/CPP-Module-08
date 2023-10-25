#pragma once

#include <iostream>

template <typename T>
int	easyfind(const T& container, int value)
{
	for (int i = 0; container[i]; i++)
		if (container[i] == value)
			return i;
	throw std::runtime_error("Element not found in the container");
}
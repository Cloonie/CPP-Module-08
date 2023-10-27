#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	typename T::iterator element = std::find(container.begin(), container.end(), value);
	if (element != container.end())
		return element;
	else
		throw std::runtime_error("Element not found in the container");
}

// template <typename T>
// int	easyfind(const T& container, int value)
// {
// 	for (int i = 0; container[i]; i++)
// 		if (container[i] == value)
// 			return i;
// 	throw std::runtime_error("Element not found in the container");
// }
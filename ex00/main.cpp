#include "easyfind.hpp"

#include <vector>

int	main(void)
{
	std::vector<int> vec;
	vec.push_back(1); // index: 0
	vec.push_back(4);
	vec.push_back(7);
	vec.push_back(10);
	vec.push_back(99); // index: 4

	try
	{
		int index1 = easyfind(vec, 99);
		std::cout << "Found at index: " << index1 << std::endl;

		int index2 = easyfind(vec, 2);  // Element not in the vector
		std::cout << "Found at index: " << index2 << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
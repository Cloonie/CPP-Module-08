#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(9);

	try
	{
		int target = 4;
		std::vector<int>::iterator index = easyfind(vec, target);
		std::cout << "Found value: " << *index << std::endl;

		target = 6;
		index = easyfind(vec, target);
		std::cout << "Found value: " << *index << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
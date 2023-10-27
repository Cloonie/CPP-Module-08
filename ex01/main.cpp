#include "Span.hpp"

int* getRandomRangeOfIterators(unsigned int amount)
{
	int *arr = new int[amount];

	std::srand(std::time(0));
	for (unsigned int i = 0; i < amount; ++i)
	{
		int randomNum = std::rand() % 10000 + 1;
		arr[i] = randomNum;
		std::cout << randomNum << " ";
	}
	arr[amount] = 0;
	std::cout << "\n";
	return arr;
}

int main()
{
	// int *arr2 = getRandomRangeOfIterators(10);
	try
	{
		Span sp = Span(10000);
		int arr[] = {6, 3, 17, 9, 11};
		sp.addManyNumbers(arr, arr + 5);

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl
		<< "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// delete[] arr2;
	return 0;
}

// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);

// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;

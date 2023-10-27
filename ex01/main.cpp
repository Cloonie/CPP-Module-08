#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10000);
		sp.addManyNumbers(10);
		std::cout << std::endl << std::endl
		<< "Shortest Span: " << sp.shortestSpan() << std::endl
		<< "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

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

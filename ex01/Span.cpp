#include "Span.hpp"

Span::Span(unsigned int max) : max(max)
{

}

Span::~Span()
{

}

Span::Span(const Span& ref)
{
	this->max = ref.max;
	this->numbers = ref.numbers;
	*this = ref;
}

Span& Span::operator=(const Span& ref)
{
	this->max = ref.max;
	this->numbers = ref.numbers;
	return (*this);
}

void Span::addNumber(int num)
{
	if (numbers.size() < max)
		numbers.push_back(num);
	else
		throw MyException("Exceed maximum number of elements");
}

int	Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw MyException("Not enough numbers to find shortest span");
	std::sort(numbers.begin(), numbers.end());
	int minSpan = numbers[1] - numbers[0];
	for (size_t i = 1; i < numbers.size() - 1; i++)
		if ((numbers[i + 1] - numbers[i]) < minSpan)
			minSpan = (numbers[i + 1] - numbers[i]);
	return minSpan;
}

int	Span::longestSpan()
{
	if (numbers.size() < 2)
		throw MyException("Not enough numbers to find longest span");
	std::sort(numbers.begin(), numbers.end());
	return numbers.back() - numbers.front();
}

void Span::addManyNumbers(unsigned int amount)
{
	if (amount >= max)
		throw MyException("Amount of numbers cannot exceed maximum capacity");
	std::srand(std::time(0));
	for (unsigned int i = 0; i < amount; ++i)
	{
		int randomNum = std::rand() % 10000 + 1;
		addNumber(randomNum);
		std::cout << randomNum << " ";
	}
}
#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

#include <cstdlib>
#include <ctime>

class Span
{
	private:
		unsigned int max;
		std::vector<int> numbers;

	public:
		Span(unsigned int max);
		~Span();
		Span(const Span& ref);
		Span& operator=(const Span& ref);

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();

		template <typename Iterator>
		void	addManyNumbers(Iterator begin, Iterator end)
		{
			while (begin != end && numbers.size() < max)
			{
				addNumber(*begin);
				++begin;
			}
		}
};

class MyException : public std::exception 
{
	private:
		std::string errorMessage;

	public:
		MyException(const char* message) : std::exception(), errorMessage(message) {}

		// Override the what() method to provide a custom error message
		const char* what() const throw() {
			return errorMessage.c_str();
		}

		~MyException() throw() {}
};
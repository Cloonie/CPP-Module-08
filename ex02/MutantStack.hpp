#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() { std::cout << "NEW MSTACK" << std::endl; };
		~MutantStack() { std::cout << "DELETE MSTACK" << std::endl; };
		MutantStack(const MutantStack& ref) { *this = ref; };
		MutantStack& operator=(const MutantStack& ref) { (void)ref; return (*this); };

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()	{return std::stack<T>::c.begin();}
		iterator end()		{return std::stack<T>::c.end();}
};
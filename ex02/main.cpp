#include "MutantStack.hpp"
#include <vector>

int	main(void)
{
	{
		std::cout << "~~~~~ MutantStack ~~~~~" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "Test Copy" << std::endl;
		std::cout << "m: " << mstack.top() << " s: " << s.top() << std::endl;
		mstack.pop();
		s.pop();
		std::cout << "m: " << mstack.top() << " s: " << s.top() << std::endl;
		s.push(42);
		std::cout << "m: " << mstack.top() << " s: " << s.top() << std::endl;
	}

	{
		std::cout << "~~~~~ Vector ~~~~~" << std::endl;
		std::vector<int> vec;

		vec.push_back(5);
		vec.push_back(17);

		std::cout << vec.back() << std::endl;

		vec.pop_back();

		std::cout << vec.size() << std::endl;

		vec.push_back(3);
		vec.push_back(5);
		vec.push_back(737);
		//[...]
		vec.push_back(0);

		std::vector<int>::iterator it = vec.begin();
		std::vector<int>::iterator ite = vec.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::vector<int> s(vec);
	}

	{
		std::cout << "~~~~~ My own tests of std::stack ~~~~~" << std::endl;
		std::stack<int>	intStack;

		// Check if stack is empty returns true or false
		std::cout << std::boolalpha << "Is the stack empty? : " << intStack.empty() << std::endl;

		// Adds element to stack
		intStack.push(11);
		intStack.push(22);
		intStack.push(33);

		// Removes the most recent element
		intStack.pop();

		// Returns a reference of the most recent element without removing it
		std::cout << "Most recent value : " << intStack.top() << std::endl;

		// Returns the size of the stack
		std::cout << "Size of stack : " << intStack.size() << std::endl;
	}
	std::cout << "~~~~~ The End ~~~~~" << std::endl;
	return 0;
}

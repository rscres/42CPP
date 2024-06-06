#include "MutantStack.hpp"
#include <iostream>
#include <algorithm>
#include <list>

void reportStackSize(const MutantStack<int>& s)
{
    std::cout << s.size() << " elements on stack\n";
}

void reportStackTop(const MutantStack<int>& s)
{
    // Leaves element on stack
    std::cout << "Top element: " << s.top() << '\n';
}

int main() {
	std::cout << "---------------MSTACK-----------------" << std::endl;
	
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "Front: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
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
	}

    std::cout << std::endl << "---------------LIST-----------------" << std::endl;
	
	{
		std::list<int> l1;
		l1.push_back(5);
		l1.push_back(17);
		std::cout << "Front: " << l1.back() << std::endl;
		l1.pop_back();
		std::cout << "Size: " << l1.size() << std::endl;
		l1.push_back(3);
		l1.push_back(5);
		l1.push_back(737);
		l1.push_back(0);
		std::list<int>::iterator l_it = l1.begin();
		std::list<int>::iterator l_ite = l1.end();
		++l_it;
		--l_it;
		while (l_it != l_ite)
		{
			std::cout << *l_it << std::endl;
			++l_it;
		}
	}

	std::cout << std::endl << "---------------Other tests-----------------" << std::endl;
	
	{
		MutantStack<int> s;

		std::cout << std::boolalpha;
		std::cout << "Initially, s.empty(): " << s.empty() << '\n';

		s.push(2);
		s.push(6);
		s.push(42);
		s.push(51);

		std::cout << "After adding elements, s.empty(): " << s.empty() << '\n';

		reportStackSize(s);
		reportStackTop(s);
	
		reportStackSize(s);
		s.pop();
	
		reportStackSize(s);
		reportStackTop(s);


		MutantStack<int>::iterator it = s.begin();
		MutantStack<int>::iterator ite = s.end();

		for (int index = 0; index < (ite - it); index++) {
			std::cout << "Pos [" << index << "] Value[" << *(it + index) << "]" << std::endl;
		}
	}
    return 0;
}

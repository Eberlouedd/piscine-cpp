#include <iostream>
#include <vector>
#include "easyFind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
    v.push_back(4);
    v.push_back(5);

	try {
		std::cout << *easyfind(v, 5) << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "------------------------------" << std::endl;
	
	try {
		std::cout << *easyfind(v, -42) << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }	
	
	std::cout << "------------------------------" << std::endl;
}
#include "Array.hpp"

#define SIZE 5

int main()
{
	Array<int>		intTest(SIZE);
	Array<std::string>	stringTest(SIZE);

	stringTest[0] = "abcdefg";
	intTest[0] = 1;
    intTest[1] = 2;
    intTest[2] = 3;
    intTest[3] = 4;
	
	std::cout << "taille du tableau de INT : " << intTest.getSize() << std::endl;
	std::cout << "taille du tableau de STRING : " << stringTest.getSize() << std::endl;

    std::cout << "------------ 0 --------------------" << std::endl;

    std::cout << "STRING  : " << stringTest[0] << std::endl;

	Array<std::string>	cpystringTest;
	cpystringTest = stringTest;
	cpystringTest[1] = "hijk";
	cpystringTest[0] = "ohoh";

	std::cout << "----------- 1 outofbound--------" << std::endl;

	try {
		std::cout << intTest[6] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "---------- 2 negatif --------" << std::endl;
	
	try {
		std::cout << stringTest[-1] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }
	
	std::cout << "---------- 3 ---------" << std::endl;

	try {
		for (int i = 0; i < SIZE; i++)
			std::cout << stringTest[i] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "---------- 4  ---------" << std::endl;

	try {
		for (int i = 0; i < SIZE; i++)
			std::cout << cpystringTest[i] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "----------- 5--------" << std::endl;

	try {
		for (int i = 0; i < 5; i++)
			std::cout << intTest[i] << std::endl;
	} catch (std::exception &e){ std::cout << e.what() << std::endl; }
}
#include "Span.hpp"

int main()
{
	srand(time(0));

	{
		try {
			
			Span sp = Span(1);

			sp.addNumber(1);

            std::vector<int>	vector = sp.getVector();
			std::cout << "Values: " << std::endl;
	        for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++){
		        std::cout << *it << std::endl;}
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "----------------------------------------------" << std::endl;

	{
		try {
		
			Span sp = Span(6);
			std::vector<int> v;

			v.push_back(24);
			v.push_back(29);
			v.push_back(-12);
			v.push_back(-4);
			v.push_back(1);

			sp.rangeOfIter(v.begin(), v.end(), v);

			std::cout << "Values: " << std::endl;
	        for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
		        std::cout << *it << std::endl;}

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>

class Span
{
    private:
		std::vector<int>	vector;
		unsigned int		realSize;
        unsigned int        sizeMax;

		class AlreadyFullException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "The vector is full.";
				}
		};

		class InvalidNumberOfElementsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Not enough elements.";
				}
		};
	public:
        Span();
		Span(unsigned int N) : realSize(0), sizeMax(N) {};
		Span(Span const & span);
		Span &operator=(Span const & rhs);
		~Span();

		void	addNumber(int number);
        int		shortestSpan();
		int		longestSpan();
        unsigned int	getRealSize();
        unsigned int	getSizeMax();
        std::vector<int>	getVector();
        void    rangeOfIter(std::vector<int>::iterator start, std::vector<int>::iterator end, std::vector<int> v);
		void	affValues();
};

#endif
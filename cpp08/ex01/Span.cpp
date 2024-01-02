#include "Span.hpp"
#include <algorithm>
#include <iterator>
#include <vector> 

Span::Span()
{
	this->sizeMax = 0;
	this->realSize = 0;
}
Span::Span(Span const & span)
{
    this->vector = span.vector;
	this->realSize = span.realSize;
	this->sizeMax = span.sizeMax;
}

Span::~Span() {}

Span	&Span::operator=(Span const & span)
{
    this->sizeMax = span.sizeMax;
	this->realSize = span.realSize;
	return *this;
}


void	Span::addNumber(int number)
{
	if (this->realSize == this->sizeMax)
		throw AlreadyFullException();
	this->vector.push_back(number);
    (this->realSize)++;
}

int	Span::shortestSpan()
{
	if (this->vector.size() < 2)
		throw InvalidNumberOfElementsException();

    std::vector<int> new_v(this->vector);
    std::sort(new_v.begin(), new_v.end());

	int shortest = new_v[1] - new_v[0];
	for (size_t i = 1; i < new_v.size() - 1; ++i)
    {
        int span = new_v[i + 1] - new_v[i];
        if (span < shortest) {
            shortest = span;
        }
    }
	return shortest;
}

int	Span::longestSpan()
{
	if (this->vector.size() < 2)
		throw InvalidNumberOfElementsException();

	int min = *std::min_element(this->vector.begin(), this->vector.end());
	int max = *std::max_element(this->vector.begin(), this->vector.end());
    return (max - min);
}

unsigned int	Span::getRealSize()
{
	return this->realSize;
}

unsigned int	Span::getSizeMax()
{
	return this->sizeMax;
}

std::vector<int>	Span::getVector()
{
    return this->vector;
}

void	Span::rangeOfIter(std::vector<int>::iterator start, std::vector<int>::iterator end, std::vector<int> v)
{
	if (this->sizeMax < (this->realSize + v.size()))
		throw AlreadyFullException();
	copy(start, end, std::back_inserter(this->vector));
}

void	Span::affValues()
{
	std::cout << "Values: " << std::endl;
	for (std::vector<int>::iterator it = this->vector.begin(); it != this->vector.end(); it++)
		std::cout << "\t-> " << *it << std::endl;
}
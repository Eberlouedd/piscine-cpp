#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw() {
			return "Element not found.";
		}
};

template<typename T>
typename T::iterator	easyfind(T cont, int element)
{
	typename T::iterator i = std::find(cont.begin(), cont.end(), element);
	if (i == cont.end())
		throw NotFoundException();
	else
		return i;
}

#endif
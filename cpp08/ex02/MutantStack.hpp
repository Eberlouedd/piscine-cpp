#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

        typedef typename std::stack<T>::container_type::iterator		iterator;
	    typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		
        MutantStack<T>() {};
		MutantStack<T>(MutantStack<T> const &copy): std::stack<T>(copy){};
        ~MutantStack<T>() {};
		MutantStack<T>	&operator=(MutantStack<T> const &copy)
		{
			std::stack<T>::operator=(copy);
			return *this; 
		}

		iterator begin() { return std::stack<T>::c.begin(); };
		iterator end() { return std::stack<T>::c.end(); };
		
        const_iterator		begin() const { return std::stack<T>::c.begin(); };
		const_iterator		end() const { return std::stack<T>::c.end(); };
};

#endif
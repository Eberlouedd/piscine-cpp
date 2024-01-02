#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
#include <climits>

template<typename T>
class Array
{
    private:
		int	size;
		T	*array;
	public:
		class IndexOutOfBoundException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Index out of bound.";
				}
		};

        /* Constructeurs */

		Array<T>()
        {
            size = 0;
            array = new T[0]();
        };

		Array<T>(const unsigned int n){
            this->size = n;
			this->array = new T[this->size];
		};

		Array<T>(Array<T> const &array) {
			this->size = array.size;
			this->array = new T[this>size];
			for (int i = 0; i < this->size; i++)
				this->array[i] = array.array[i];
		};
		//Fait
        Array<T>	&operator=(Array<T> const &array) {
		 	if (this->array)
			    delete [] this->array;
			this->size = array.size;
			this->array = new T[this->size];
			for (int i = 0; i < this->size; i++)
				this->array[i] = array.array[i];
			return *this;
		};

		T	&operator[](const int i) const {
			if (i < 0 || i >= this->size)
            {
                throw IndexOutOfBoundException();
            }
			return this->array[i];
		}

		unsigned int	getSize() const
        {
            return this->size;
        }

        ~Array() {
			delete [] this->array;
        }	
};

#endif
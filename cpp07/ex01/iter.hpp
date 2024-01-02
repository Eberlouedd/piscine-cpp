#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(T *array, size_t size, void (*function)(T &))
{
	for (size_t i = 0; i < size; i++)
		function(array[i]);
}

#endif
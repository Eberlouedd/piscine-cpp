#include <iostream>
#include "iter.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_double(int &value) {
    value *= 2;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);

    iter(numbers, size, ft_double);

    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}

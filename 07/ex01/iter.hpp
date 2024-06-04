#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T>
void iter(T const *array, size_t size,T func(T const element)) {
    for (size_t i = 0; i < size; i++) {
        array[i] = func(array[i]);
    }
}

template<typename T>
void iter(T *array, size_t size,T func(T element)) {
    for (size_t i = 0; i < size; i++) {
        array[i] = func(array[i]);
    }
}

#endif
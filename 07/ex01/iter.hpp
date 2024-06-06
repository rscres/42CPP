#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T>
void iter(T const *array, size_t size,void func(T const &element)) {
    for (size_t i = 0; i < size; i++) {
        func(array[i]);
    }
}

template<typename T>
void iter(T *array, size_t size,void func(T &element)) {
    for (size_t i = 0; i < size; i++) {
        func(array[i]);
    }
}

#endif
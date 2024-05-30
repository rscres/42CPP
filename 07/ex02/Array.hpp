#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template<typename T>
class Array {
    private:
        size_t len;
        T* arr;

    public:
        Array() : len(0), arr(nullptr) {}
       
        Array(size_t n) : len(n) {
            arr = new T[len];
            for (size_t i = 0; i < len; i++)
                arr[i] = T();
        }
       
        Array(const Array & other) : len(other.len) {
            arr = new T[len];
            for (size_t i = 0; i < len; i++)
                arr[i] = other.arr[i];
        }
       
        ~Array() {
            if (arr != NULL)
                delete[] arr;
        }
       
        Array& operator=(const Array & other) {
            if (this != &other) {
                delete[] arr;
                len = other.len;
                arr = new T[len];
                for (size_t i = 0; i < len; i++)
                    arr[i] = other.arr[i];
            }
            return *this;
        }

        T& operator[](int index) const {
            if (arr == NULL)
                throw std::out_of_range("Array is empty");
            if (index < 0 || (size_t)index >= len) {
                throw std::out_of_range("Array index out of range");
            }
            return arr[index];
        }

        size_t size() const {
            return len;
        }
};

#endif
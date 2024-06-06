#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() {
            std::stack<T>();
        }
        MutantStack(const MutantStack & other) {
            *this = other;
        }
        ~MutantStack() {}

        MutantStack& operator=(const MutantStack & other) {
            if (this != &other) {
                this = other;
                this->c = other.c;
			}
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {
            return this->c.begin();
        }

        iterator end() {
            return this->c.end();
        }
};

#endif // MUTANTSTACK_HPP
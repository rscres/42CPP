
#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
    private:
        std::vector<int> _vector;
        unsigned int _size;
    
        class SpanFullException : std::exception {
            virtual const char* what() const throw() ;
        };

        class NotEnoughElementsException : std::exception {
            virtual const char* what() const throw() ;
        };


    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        unsigned int getSize() const ;
        std::vector<int> getVector() const ;

        void addNumber(int num);
        int shortestSpan() const ;
        int longestSpan() const ;
        void fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void fillSpan(unsigned int size);
};

#endif // SPAN_HPP

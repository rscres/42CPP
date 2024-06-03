#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));

    Span s1(100000);

    for (int i = 0; i < 100000; i++) {
        s1.addNumber(rand() % 1500000);
    }
    std::cout << s1.longestSpan() << std::endl;
    std::cout << s1.shortestSpan() << std::endl;
    // s1.addNumber(11);
    // s1.addNumber(12);

    Span s2(10000);

    for (int i = 0; i < 100; i++) {
        s2.addNumber(rand() % 150000);
    }
    std::cout << s2.longestSpan() << std::endl;
    std::cout << s2.shortestSpan() << std::endl;
    
    Span s3(100);

    for (int i = 0; i < 100; i++) {
        s3.addNumber(rand() % 1500);
    }
    std::cout << s3.longestSpan() << std::endl;
    std::cout << s3.shortestSpan() << std::endl;

    Span s4(10);
    for (int i = 0; i < 10; i++) {
        s4.addNumber(rand() % 150);
    }
    std::cout << s4.longestSpan() << std::endl;
    std::cout << s4.shortestSpan() << std::endl;
    return 0;
}
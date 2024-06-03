#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <vector>

int main() {
    srand(time(0));

    Span s1(100000);

    for (int i = 0; i < 100000; i++) {
        s1.addNumber(rand() % 1500000);
    }
    std::cout << s1.longestSpan() << std::endl;
    std::cout << s1.shortestSpan() << std::endl;

    std::cout << "----------------" << std::endl;

    Span s2(10000);

    for (int i = 0; i < 100; i++) {
        s2.addNumber(rand() % 150000);
    }
    std::cout << s2.longestSpan() << std::endl;
    std::cout << s2.shortestSpan() << std::endl;
    
    std::cout << "----------------" << std::endl;

    Span s3(100);
    s3.fillSpan(s3.getSize());
    std::cout << s3.longestSpan() << std::endl;
    std::cout << s3.shortestSpan() << std::endl;

    std::cout << "----------------" << std::endl;
    Span s4(10);
    s4.fillSpan(s4.getVector().begin(), s4.getVector().end());
    std::cout << s4.longestSpan() << std::endl;
    std::cout << s4.shortestSpan() << std::endl;
    
    std::cout << "----------------" << std::endl;

    std::vector<int> v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(10);
    
    Span s5(5);
    s5.fillSpan(v.begin(), v.end());
    std::cout << s5.longestSpan() << std::endl;
    return 0;
}
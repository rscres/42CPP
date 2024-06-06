
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <iostream>

class Pmergeme {
    private:
        Pmergeme();
        std::vector<int> _vector;
        std::deque<int> _deque;

        template <typename T>
        T populateContainer(std::string input) {
            T container;
            std::string::size_type pos = 0;
            std::string::size_type last;
            while (pos < input.size()) {
                if (input[pos] == ' ') {
                    pos++;
                    continue;
                }
                last = input.find_first_of(" ", pos);
                container.push_back(std::atoi(input.substr(pos, last).c_str()));
                pos += last - pos + 1;
                if (last == std::string::npos)
                    break;
            }
            return container;
        }

        bool verifyInput(std::string input);

    public:
        Pmergeme(std::string input);
        Pmergeme(const Pmergeme& other);
        Pmergeme& operator=(const Pmergeme& other);
        ~Pmergeme();

        void merge();
        int initContainers(std::string input);
};

#endif // PMERGEME_HPP

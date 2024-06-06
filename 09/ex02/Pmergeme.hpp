
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

        template <typename T>
        T merge(T &left, T &right) {
            T temp;
            typename T::iterator it1 = left.begin();
            typename T::iterator it2 = right.begin();
            while (it1 != left.end() && it2 != right.end()) {
                if (*it1 < *it2) {
                    temp.push_back(*it1);
                    it1++;
                } else {
                    temp.push_back(*it2);
                    it2++;
                }
            }
            while (it1 != left.end()) {
                temp.push_back(*it1);
                it1++;
            }
            while (it2 != right.end()) {
                temp.push_back(*it2);
                it2++;
            }
            return temp;
        }

        template <typename T>
        void sort(T &container, int start, int end) {
            if (start >= end)
                return;

            if (end - start == 1) {
                if (container[start] > container[end])
                    std::swap(container[start], container[end]);
                return;
            }

            int mid = (start + end) / 2;
            T left(container.begin() + start, container.begin() + mid + 1);
            T right(container.begin() + mid + 1, container.begin() + end + 1);
            sort(left, start, mid);
            sort(right, mid + 1, end);
            container = merge(left, right);
        }

        bool verifyInput(std::string input);

    public:
        Pmergeme(std::string input);
        Pmergeme(const Pmergeme& other);
        Pmergeme& operator=(const Pmergeme& other);
        ~Pmergeme();

        int initContainers(std::string input);
        void sortContainers();
};

#endif // PMERGEME_HPP

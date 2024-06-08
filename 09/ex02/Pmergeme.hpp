
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <iostream>

int getJacobsthal(int n);
bool compare(std::pair<int, int> a, std::pair<int, int> b);
bool is_sorted(const std::vector<int>& vec);

class Pmergeme {
    private:
        Pmergeme();
        std::vector<std::string> _input;
        std::vector<int> _vector;
        std::deque<int> _deque;
        std::vector<int> _vectorSorted;
        std::deque<int> _dequeSorted;
        std::vector<std::pair<int, int> > _vectorTemp;
        std::deque<std::pair<int, int> > _dequeTemp;
        bool leftover;
        int leftover_value;

        template <typename T>
        T populateContainer(std::vector<std::string> input) {
            T container;
            std::vector<std::string>::iterator it = input.begin();
            while (it != input.end()) {
                container.push_back(std::atoi(it->c_str()));
                it++;
            }
            return container;
        }

        template <typename T, typename P>
        void getPairs(T &container, P &pair) {
            if (container.size() % 2 != 0) {
                // Process the last element
                leftover_value = *(container.end() - 1);
                leftover = true;
            }
            typename T::iterator it = container.begin();
            while (it < container.end()) {
                typename T::iterator it2 = it + 1;
                if (it2 != container.end()) {
                    if (*it > *it2) {
                        std::swap(*it, *it2);
                    }
                    pair.push_back(std::make_pair(*it, *it2));
                    it += 2;
                } else {
                    // Handle the case where there's only one element left
                    pair.push_back(std::make_pair(*it, *it));
                    it++;
                }
            }
        }

        template <typename P> //maybe remove later
        void sortPairs(P &pair) {
            std::sort(pair.begin(), pair.end(), compare);
        }

        template <typename T, typename P>
        void sort(T &sorted, P &pair) {
            //insert largest element of each pair in ascending order in sorted 
            typename P::iterator it = pair.begin();
            while (it != pair.end()) {
                sorted.push_back(it->second);
                it++;
            }

            //insert smallest element of first pair in sorted
            if (leftover && pair.begin()->first <= leftover_value) {
                pair.erase(find(pair.begin(), pair.end(), std::make_pair(leftover_value, leftover_value)));
                sorted.insert(std::lower_bound(sorted.begin(), sorted.end(), pair.begin()->first), pair.begin()->first);
            } else
                sorted.insert(sorted.begin(), pair.begin()->first);

            //insert smallest element of each pair in sorted
            int prev_jacob = 1;
            typename T::iterator it2;
            int jacob_i = 3;
            int nbrLeft = pair.size() - 1; 
            while (nbrLeft > 0) {
                int jacob = getJacobsthal(jacob_i++);
                if (jacob > static_cast<int>(pair.size()))
                    jacob = pair.size();
                while (jacob != prev_jacob && nbrLeft > 0) {
                    *it = pair.at(jacob - 1);
                    it2 = find(sorted.begin(), sorted.end(), it->second);
                    while(it2 != sorted.begin() && it->first < *it2)
                        it2--;
                    if (it->first > *it2)
                        sorted.insert(it2 + 1, it->first);
                    else
                        sorted.insert(it2, it->first);
                    jacob--;
                    nbrLeft--;
                }
                prev_jacob = getJacobsthal(jacob_i - 1);
            }
        }

        template<typename T>
        void printContainer(T &container) {
            for (typename T::iterator it = container.begin(); it != container.end(); it++) 
                std::cout << *it << " ";
            std::cout << std::endl;
        }

        bool verifyInput(std::vector<std::string> input);
        int initContainers(std::vector<std::string> input);

    public:

        Pmergeme(std::vector<std::string> input);
        Pmergeme(const Pmergeme& other);
        Pmergeme& operator=(const Pmergeme& other);
        ~Pmergeme();

        void fordJohnson();
        
        class InvalidArgumentsException : std::exception {
            public:
                virtual const char* what() const throw() ;
        };
};

#endif // PMERGEME_HPP

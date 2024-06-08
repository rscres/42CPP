
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
            typename T::iterator it = container.begin();
            typename P::iterator pair_it = pair.begin();
            typename T::iterator it2 = it + 1;
            while (it < container.end() - 1 && it2 < container.end()) {
                it2 = it + 1;
                if (*it > *it2) {
                    std::swap(*it, *it2);
                }
                pair.push_back(std::make_pair(*it, *it2));
                it += 2;
                pair_it++;
            }
            if (container.size() % 2 != 0) {
                // Process the last element
                it = container.end() - 1;
                pair.push_back(std::make_pair(*it, *it));
                leftover = true;
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
            if (leftover)
                pair.pop_back();
            //insert smallest element of first pair in sorted
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
                while (jacob != prev_jacob) {
                    if (nbrLeft <= 0)
                        break;
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

        class InvalidArgumentsException : std::exception {
            virtual const char* what() const throw() ;
        };

        bool verifyInput(std::vector<std::string> input);
        int initContainers(std::vector<std::string> input);

    public:

        Pmergeme(std::vector<std::string> input);
        Pmergeme(const Pmergeme& other);
        Pmergeme& operator=(const Pmergeme& other);
        ~Pmergeme();

        void fordJohnson();
};

#endif // PMERGEME_HPP

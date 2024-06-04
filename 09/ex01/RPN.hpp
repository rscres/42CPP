
#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>

class RPN {
    private:
        std::stack<int> _numbers;
        std::stack<char> _operators;

    public:
        RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
        ~RPN();

        void pushNumber(int number);
        void pushOperator(char op);
        void calculate();
        int getResult() const;

        void getInput(std::string input);
        bool validateInput(std::string input);
};

#endif // RPN_HPP

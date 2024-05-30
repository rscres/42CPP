
#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data {
    private:
        std::string info;

    public:
        Data();
        Data(const Data& other);
        Data& operator=(const Data& other);
        ~Data();

        std::string getInfo() const;
};

#endif // DATA_HPP

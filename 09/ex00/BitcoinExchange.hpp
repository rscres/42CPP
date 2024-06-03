
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <exception>

class BitcoinExchange {
    private:
        std::map<std::string, double> _data;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();

        typedef std::map<std::string, double>::iterator iterator;
        typedef std::map<std::string, double>::const_iterator const_it;

        void setData(std::string date, double rate);
        std::map<std::string, double> getData() const;
        double findPrice(std::string date) const;

        void initDatabase();
        void readInputFile(std::string filename);
};

#endif // BITCOINEXCHANGE_HPP

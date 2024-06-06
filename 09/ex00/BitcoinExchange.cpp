
#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    this->_data = other._data;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        this->_data = other._data;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::setData(std::string date, double price) {
    _data[date] = price;
}

std::map<std::string, double> BitcoinExchange::getData() const {
    return _data;
}


double BitcoinExchange::findPrice(std::string date) const {
    if (date < _data.begin()->first)
        return -1;

    const_it it = _data.lower_bound(date);
    if (it->first == date) {
        return it->second;
    } 
    it--;
    return it->second;
}

void BitcoinExchange::initDatabase() {
    std::ifstream file("data.csv");

    if (!file.is_open()) {
        throw std::runtime_error("data.csv not found");
    }
    
    std::string line;
    std::getline(file, line); // skip header
    while (std::getline(file, line)) {
        std::string date = line.substr(0, 10);
        double price = std::atof(line.substr(11).c_str());
        setData(date, price);
    }
    file.close();
}

bool isDateValid(std::string date) {
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());
    
    if (month > 12 || month <= 0)
        return false;
    if (month == 2) { // February
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day > 29 || day <= 0)
                return false;
        } else {
            if (day > 28 || day <= 0)
                return false;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // April, June, September, November
        if (day > 30 || day <= 0) 
            return false;
    } else { // January, March, May, July, August, October, December
        if (day > 31 || day <= 0)
            return false;
    }

    return true;
}

int isValueValid(double value) {
    if (value > 1000) {
        std::cerr << "Error: value too high" << std::endl;
        return 1;
    }
    if (value < 0) {
        std::cerr << "Error: not a positive value" << std::endl;
        return 1;
    }
    return 0;
}

void BitcoinExchange::readInputFile(std::string filename) {
    std::ifstream file(filename.c_str());
    
    if (!file.is_open()) {
        throw std::runtime_error("input file not found");
    }

    std::string line;
    while (std::getline(file, line)) {
        std::string date = line.substr(0, 10);
        if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
            std::cerr << "Invalid date format" << std::endl;
            continue;
        }
        if (isDateValid(date)) {
            double price = findPrice(date);
            double amount = std::atof(line.substr(line.find_first_of("0123456789+", line.find("|"))).c_str()); // skip date and find first number
            if (price == -1) {
                std::cerr << "No data for date " << date << std::endl;
            } else if (isValueValid(amount)) {
                continue;
            } else {
                std::cout << date << " => " << amount << " => " << (price * amount) << std::endl;
            }
        } else {
            std::cerr << "Invalid date" << std::endl;
        }
    }
    file.close();
}
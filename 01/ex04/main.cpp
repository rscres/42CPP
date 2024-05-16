/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renato <renato@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:01:06 by renato            #+#    #+#             */
/*   Updated: 2024/05/16 20:48:54 by renato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string read_file_content(char *filename) {
    std::ifstream file;
    file.open(filename, std::ios::out);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file" << std::endl;
        return ("");
    }
    char line[2048];
    std::string buffer;
    while (!file.eof()) {
        file.getline(line, 2048);
        if (!line[0])
            break;
        buffer.append(line);
        buffer.append("\n");
    }
    file.close();
    return (buffer);
}

std::string replace_word(std::string buffer, char *word, std::string replace) {
    std::string word_to_find = word;
    size_t len = word_to_find.length();
    while (buffer.find(word_to_find) != std::string::npos) {
        size_t pos = buffer.find(word_to_find);
        buffer.erase(pos, len);
        buffer.insert(pos, replace);
    }
    return (buffer);
}

void write_file_content(std::string buffer, std::string filename) {
    std::ofstream file;
    file.open(filename.c_str(), std::ios::out);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file" << std::endl;
        return ;
    }
    file << buffer;
    file.close();
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <word to find> <word to replace>" << std::endl;
        return (1);
    }
    std::string buffer = read_file_content(argv[1]);
    buffer = replace_word(buffer, argv[2], argv[3]);
    std::string outfile_name = std::string(argv[1]) + ".replace";
    write_file_content(buffer, outfile_name);
    return (0);
}


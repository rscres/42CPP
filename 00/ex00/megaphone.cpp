#include <iostream>

int main(int argc, char *argv[]) { if (argc <= 1) { std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; return 0; } for (int i = 1; i < argc; i++) { for (char *str = argv[i]; *str; str++) std::cout << (char)toupper(*str); } std::cout << std::endl; return 0; }
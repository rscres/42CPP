#include "iter.hpp"
#include <iostream>

// void printInt(int i) {
//     std::cout << i << std::endl;
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     ::iter(arr, 5, &printInt);
    
//     std::string arr2[3] = {"hello", "there", "mate"};
//     ::iter(arr2, 3, ::printArr<std::string>);
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
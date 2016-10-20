#include <iostream>

#include "calculator.hpp"

int main()
{
    int x, y;
    std::cin >> x;
    std::cin >> y;
    
    std::cout << sum( x, y ) << std::endl;

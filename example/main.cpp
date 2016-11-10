#include <iostream>

#include "calculator.hpp"
using namespace std;

int main()
{
    float x, y;
    cin >> x;
    cin >> y;
    
    cout << sum( x, y ) << endl;
    cout << sub( x, y ) << endl;
    cout << mult( x, y ) << endl;
    cout << div( x, y ) << endl; 
    cout << pow( x ) << endl;
    cout << sq( x ) << endl;
    
    return 0;
}

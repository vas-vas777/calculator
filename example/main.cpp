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
    if (y == 0)
        cout << "Forbidden" << endl;
    else    
    cout << dev( x, y ) << endl; 
    cout << power( x, y ) << endl;
    if (x >= 0)
    cout << sq( x ) << endl;
    else
    cout << "Forbidden" << endl;    
    return 0;
}

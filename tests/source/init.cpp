#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    int x = ;
    int y = ;
    
    int rv = sum( x, y );
    
	REQUIRE( rv == 7);
}

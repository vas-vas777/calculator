#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    int x =4 ;
    int y =1 ;
    
    int rv = sum( x, y );
    
	REQUIRE( rv ==5 );
}
SCENARIO("calculator mult", "[mult]") {
    int x =4 ;
    int y =1 ;
    
    int rv = mult( x, y );
    
	REQUIRE( rv ==4 );
}
SCENARIO("calculator dev", "[dev]") {
    int x =4 ;
    int y =1 ;
    
    int rv = sum( x, y );
    
	REQUIRE( rv ==4 );
}
SCENARIO("calculator pow", "[pow]") {
    int x =4 ;
    int y =1 ;
    
    int rv = sum( x, y );
    
	REQUIRE( rv ==4 );
}
SCENARIO("calculator sub", "[sub]") {
    int x =4 ;
    int y =1 ;
    
    int rv = sum( x, y );
    
	REQUIRE( rv ==3 );
}
SCENARIO("calculator sq", "[sq]") {
    int x =4 ;
    int y =1 ;
    
    int rv = sq( x );
    
	REQUIRE( rv ==2 );
}

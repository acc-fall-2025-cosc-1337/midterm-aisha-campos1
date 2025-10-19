#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
test_case "decimal_to_hex"
{
	REQUIRE(decimal_to_hex(0) == "0");
	REQUIRE(decimal_to_hex(10) == "A");
	REQUIRE(decimal_to_hex(255) == "FF");
	REQUIRE(decimal_to_hex(4095) == "FFF");
}
test_case hex_to_decimal
{
	REQUIRE(hex_to_decimal("0") == 0);
	REQUIRE(hex_to_decimal("A") == 10);
	REQUIRE(hex_to_decimal("FF") == 255);
	REQUIRE(hex_to_decimal("FFF") == 4095);
}
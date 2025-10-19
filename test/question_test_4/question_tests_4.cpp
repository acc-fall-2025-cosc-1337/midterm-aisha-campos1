#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

test_case roll_dice_returns_values_in_range
{
	for (int i = 0; i < 100; ++i) {
		int result = roll_dice();
		REQUIRE(result >= 1);
		REQUIRE(result <= 6);
	}
}

TEST_CASE ("roll_dice returns different values on multiple calls")
{
	bool all_same = true;
	int first_value = roll_dice();
	for (int i = 0; i < 10; ++i) {
		int next_value = roll_dice();
		if (next_value != first_value) {
			all_same = false;
			break;
		}
	}
	REQUIRE(all_same == false);
}
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("get kinetic energy")
{
	// mass = 2 kg, velocity = 3 m/s -> KE = 0.5 * m * v^2 = 9 J
	REQUIRE(get_kinetic_energy(2.0, 3.0) == Approx(9.0));

	// zero mass or velocity yields zero energy
	REQUIRE(get_kinetic_energy(0.0, 5.0) == Approx(0.0));
	REQUIRE(get_kinetic_energy(4.0, 0.0) == Approx(0.0));
}
TEST_CASE("get potential energy")
{
	// mass = 2 kg, height = 5 m, g = 9.81 m/s^2 -> PE = m * g * h = 98.1 J
	REQUIRE(get_potential_energy(2.0, 5.0) == Approx(98.1));

	// zero mass or height yields zero energy
	REQUIRE(get_potential_energy(0.0, 10.0) == Approx(0.0));
	REQUIRE(get_potential_energy(3.0, 0.0) == Approx(0.0));
}
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"
#include <vector>
using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verifying get ingredients")
{
	vector<double> fourtyeight = get_cookie_ingredients(48);
	REQUIRE(fourtyeight.at(0) == 1.5);
	REQUIRE(fourtyeight.at(1) == 1);
	REQUIRE(fourtyeight.at(2) == 2.75);

	vector<double> nightysix = get_cookie_ingredients(96);
	REQUIRE(nightysix.at(0) == 3);
	REQUIRE(nightysix.at(1) == 2);
	REQUIRE(nightysix.at(2) == 5.5);

	vector<double> twentyfour = get_cookie_ingredients(24);
	REQUIRE(twentyfour.at(0) == .75);
	REQUIRE(twentyfour.at(1) == .5);
	REQUIRE(twentyfour.at(2) == 1.375);
}

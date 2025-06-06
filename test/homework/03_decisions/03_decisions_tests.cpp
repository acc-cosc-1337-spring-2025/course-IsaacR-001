#include "decisions.h"


TEST_CASE("Verify get_letter_grade_using_if function") {
    REQUIRE(get_letter_grade_using_if(95) == "A");
    REQUIRE(get_letter_grade_using_if(85) == "B");
    REQUIRE(get_letter_grade_using_if(75) == "C");
    REQUIRE(get_letter_grade_using_if(65) == "D");
    REQUIRE(get_letter_grade_using_if(50) == "F");
}

TEST_CASE("Verify get_letter_grade_using_switch function") {
    REQUIRE(get_letter_grade_using_switch(95) == "A");
    REQUIRE(get_letter_grade_using_switch(85) == "B");
    REQUIRE(get_letter_grade_using_switch(75) == "C");
    REQUIRE(get_letter_grade_using_switch(65) == "D");
    REQUIRE(get_letter_grade_using_switch(50) == "F");
}
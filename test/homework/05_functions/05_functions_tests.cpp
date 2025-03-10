#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify GC Content Calculation", "[get_gc_content]") {
    REQUIRE(get_gc_content("AGCTATAG") == 0.375);
    REQUIRE(get_gc_content("CGCTATAG") == 0.5);
}

TEST_CASE("Verify Reverse String", "[get_reverse_string]") {
    REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
    REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Verify DNA Complement", "[get_dna_complement]") {
    REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}
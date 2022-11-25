#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file
#include "catch.hpp"
#include "duration.h"

TEST_CASE ("test") {

    //test constructers
    Duration d; 

    REQUIRE(d.getDuration() == 0);

    Duration l(10);

    REQUIRE(l.getDuration() == 10);

    //test of alarm

    d.setAlarm(10);

    REQUIRE(d.tick() == false);

    REQUIRE(d.tick(20) == true);

    REQUIRE(d.tick() == true);

    //test if alarm resets

    REQUIRE(d.getAlarm() == 0);

}


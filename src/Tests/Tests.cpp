#include "../../header/Tests/Tests.hpp"
#include <gtest/gtest.h>

TEST(InitTest, Sample) {
    EXPECT_EQ(1, 1);
}

Tests::Manager::Manager(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
}

int Tests::Manager::runAll() {
    return RUN_ALL_TESTS();
}
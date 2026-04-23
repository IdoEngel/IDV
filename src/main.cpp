#include <iostream>
#include <gtest/gtest.h>

TEST(InitTest, Sample) {
    EXPECT_EQ(1, 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    
    std::cout << "Hello, IDV!!" << std::endl;

    return RUN_ALL_TESTS();
}
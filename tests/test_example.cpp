#include <gtest/gtest.h>

// A simple function to test
int Add(int a, int b) {
    return a + b;
}

// Test case for the Add function
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(Add(1, 1), 2);
    EXPECT_EQ(Add(10, 20), 30);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(Add(-1, -1), -2);
    EXPECT_EQ(Add(-10, -20), -30);
}


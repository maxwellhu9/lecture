#include "gtest/gtest.h"

extern "C" {
#include "math_utils.h"
}

TEST(math, add_positive) { EXPECT_EQ(add(2, 3), 5); }

TEST(math, add_negative) { EXPECT_EQ(add(-2, -3), -5); }

TEST(math, sub_positive) { EXPECT_EQ(subtract(-2, 3), -5); }

TEST(math, sub_negative) { EXPECT_EQ(subtract(-2, -3), 1); }


#include "gtest/gtest.h"
extern "C" {
#include "array_utils.h"
}
TEST(array_utils, sum_simple) {
    int nums[] = {1, 2, 3, 4};
    EXPECT_EQ(array_sum(nums, 4), 10);
}
TEST(array_utils, sum_empty) {
    int nums[] = {};
    EXPECT_EQ(array_sum(nums, 0), 0);
}

TEST(array_clamp_nonnegative, mixed_values) {
    int nums[] = {-1, 2, -3, 4, 0};
    array_clamp_nonnegative(nums, 5);
    int expected[] = {0, 2, 0, 4, 0};

    for (size_t i = 0; i < 5; ++i) {
        EXPECT_EQ(nums[i], expected[i]);
    }
}

TEST(array_clamp_nonnegative, all_negative) {
    int nums[] = {-1, -2, -3, -4, -5};
    array_clamp_nonnegative(nums, 5);
    int expected[] = {0, 0, 0, 0, 0};
    
    for (size_t i = 0; i < 5; ++i) {
        EXPECT_EQ(nums[i], expected[i]);
    }
}
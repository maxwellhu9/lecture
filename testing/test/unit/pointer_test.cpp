#include <gtest/gtest.h>
extern "C" {
#include "pointer.h"
}
TEST(PointerTest, ValidPointers) {
int x = 5;
int y = 7;
int result = 0;
int success = addThroughPointers(&x, &y, &result);
EXPECT_EQ(success, 1);
EXPECT_EQ(result, 12);
}

TEST(PointerTest, NullFirstPointer) {
    int y = 7;
    int result = 0;
    int success = addThroughPointers(nullptr, &y, &result);
    EXPECT_EQ(success, 0);
}

TEST(PointerTest, MutatedPointers) {
    int x = 10;
    int y = 15;
    int result = -1; // Initialize to a value that indicates "not set"
    int success = addThroughPointers(&x, &y, &result);
    EXPECT_EQ(success, 1);
    EXPECT_EQ(result, 25);
    x = 20;
    int ret = addThroughPointers(&x, &y, &result);
    EXPECT_EQ(ret, 1);
    EXPECT_EQ(result, 35);
}
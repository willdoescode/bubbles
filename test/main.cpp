#include <gtest/gtest.h>
#include <saying.h>

TEST(BubblesTest, World) {
  EXPECT_STREQ(saying, "World");
  EXPECT_EQ(7 * 6, 42);
}

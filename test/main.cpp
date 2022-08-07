#include <TDD/dollar.hpp>
#include <gtest/gtest.h>

TEST(DollarTest, Multiplication) {
  Dollar five(5);
  five.times(2);
  EXPECT_EQ(10, five.getAmount());
}

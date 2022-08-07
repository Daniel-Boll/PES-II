#include <TDD/dollar.hpp>
#include <gtest/gtest.h>

TEST(DollarTest, Multiplication) {
  Dollar five(5);
  Dollar product = five.times(2);
  EXPECT_EQ(10, product.getAmount());
  product = five.times(3);
  EXPECT_EQ(15, product.getAmount());
}

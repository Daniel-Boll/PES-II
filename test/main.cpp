#include <TDD/dollar.hpp>
#include <TDD/franc.hpp>

#include <gtest/gtest.h>

TEST(DollarTest, Multiplication) {
  Dollar five(5);
  Dollar product = five.times(2);
  EXPECT_EQ(10, product.getAmount());
  product = five.times(3);
  EXPECT_EQ(15, product.getAmount());
}

TEST(DollarTest, TestEquality) {
  EXPECT_TRUE(Dollar(5) == Dollar(5));
  EXPECT_TRUE(Dollar{5}.equals(Dollar{5}));

  EXPECT_FALSE(Dollar(5) == Dollar(6));
  EXPECT_FALSE(Dollar{5}.equals(Dollar{6}));
}

TEST(FrancTest, Multiplication) {
  Franc five(5);
  Franc product = five.times(2);
  EXPECT_EQ(10, product.getAmount());
  product = five.times(3);
  EXPECT_EQ(15, product.getAmount());
}

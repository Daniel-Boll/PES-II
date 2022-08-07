#include <gtest/gtest.h>

#include <TDD/money.hpp>

TEST(DollarTest, Multiplication) {
  Dollar five(5);
  Dollar product = five.times(2);
  EXPECT_EQ(10, product.getAmount());
  product = five.times(3);
  EXPECT_EQ(15, product.getAmount());
}

TEST(DollarTest, TestEquality) {
  EXPECT_TRUE(Dollar{5}.equals(Dollar{5}));

  EXPECT_FALSE(Dollar{5}.equals(Dollar{6}));
}

TEST(FrancTest, Multiplication) {
  Franc five(5);
  Franc product = five.times(2);
  EXPECT_EQ(10, product.getAmount());
  product = five.times(3);
  EXPECT_EQ(15, product.getAmount());
}

TEST(FrancTest, TestEquality) {
  EXPECT_TRUE(Franc{5}.equals(Franc{5}));

  EXPECT_FALSE(Franc{5}.equals(Franc{6}));
}

// FIXME: Couldn't make it..
// TEST(MoneyTest, TestEquality) {
//   // Check cross equality between instances
//   EXPECT_FALSE(Dollar{5}.equals(Franc{5}));
//   EXPECT_FALSE(Franc{5}.equals(Dollar{5}));
// }

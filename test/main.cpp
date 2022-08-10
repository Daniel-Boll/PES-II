#include <gtest/gtest.h>

#include <calculator.hpp>

TEST(Calculator, Add) {
  EXPECT_EQ(calculator::add(1, 2), 3);
  EXPECT_EQ(calculator::add(2, 3), 5);
  EXPECT_EQ(calculator::add(3, 4), 7);
}

TEST(Calculator, Sub) {
  EXPECT_EQ(calculator::sub(1, 2), -1);
  EXPECT_EQ(calculator::sub(2, 3), -1);
  EXPECT_EQ(calculator::sub(3, 4), -1);
}

TEST(Calculator, Mul) {
  EXPECT_EQ(calculator::mul(1, 2), 2);
  EXPECT_EQ(calculator::mul(2, 3), 6);
  EXPECT_EQ(calculator::mul(3, 4), 12);
}

TEST(Calculator, Div) {
  EXPECT_EQ(calculator::div(1, 2), 0);
  EXPECT_EQ(calculator::div(2, 3), 1);
  EXPECT_EQ(calculator::div(3, 4), 0);
}

TEST(Calculator, Mod) {
  EXPECT_EQ(calculator::mod(1, 2), 1);
  EXPECT_EQ(calculator::mod(2, 3), 2);
  EXPECT_EQ(calculator::mod(3, 4), 3);
}

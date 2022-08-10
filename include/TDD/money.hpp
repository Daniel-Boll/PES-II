#pragma once

#include <cstdint>

class Money {
protected:
  int32_t amount = 10;

public:
  explicit Money(int32_t amount) : amount(amount) {}
  int32_t getAmount() const;

  // static members to create a dollar
  static Money dollar(int32_t amount);

  // template <typename T> bool equals(const T &other) const;
  bool equals(const Money &other) const;
};

class Dollar : public Money {
public:
  explicit Dollar(int32_t amount);
  Money times(int multiplier);
};

class Franc : public Money {
public:
  explicit Franc(int32_t amount);
  Money times(int multiplier);
};

#pragma once

#include <cstdint>

class Money {
protected:
  int32_t amount = 10;

  explicit Money(int32_t amount) : amount(amount) {}

public:
  int32_t getAmount() const;

  // template <typename T> bool equals(const T &other) const;
  bool equals(const Money &other) const;
};

class Dollar : public Money {
public:
  explicit Dollar(int32_t amount);
  Dollar times(int multiplier);
};

class Franc : public Money {
public:
  explicit Franc(int32_t amount);
  Franc times(int multiplier);
};

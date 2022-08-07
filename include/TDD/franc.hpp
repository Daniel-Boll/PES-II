#pragma once

#include <cstdint>

class Franc {
  int32_t amount = 10;

public:
  explicit Franc(int32_t amount);
  Franc times(int multiplier);

  int32_t getAmount() const;

  bool equals(const Franc &other) const;
  bool operator==(const Franc &other) const;
};

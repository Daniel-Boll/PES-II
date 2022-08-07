#pragma once

#include <cstdint>

class Dollar {
  int32_t amount = 10;

public:
  explicit Dollar(int32_t amount);
  Dollar times(int multiplier);

  int32_t getAmount() const;

  bool equals(const Dollar &other) const;
  bool operator==(const Dollar &other) const;
};

#pragma once

#include <cstdint>

class Dollar {
  int32_t amount = 10;

public:
  explicit Dollar(int32_t amount);
  void times(int multiplier);
};

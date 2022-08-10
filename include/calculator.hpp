#pragma once

#include <cstdint>

namespace calculator {
  inline int32_t add(int32_t a, int32_t b) { return a + b; }
  inline int32_t sub(int32_t a, int32_t b) { return a - b; }
  inline int32_t mul(int32_t a, int32_t b) { return a * b; }
  inline int32_t div(int32_t a, int32_t b) { return a / b; }
  inline int32_t mod(int32_t a, int32_t b) { return a % b; }
}  // namespace calculator

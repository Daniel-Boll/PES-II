#include <TDD/money.hpp>

Franc::Franc(int32_t amount) : Money(amount) {}

Money Franc::times(int32_t multiplier) { return Money(amount * multiplier); }

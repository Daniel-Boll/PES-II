#include <TDD/money.hpp>

Franc::Franc(int32_t amount) : Money(amount) {}

Franc Franc::times(int32_t multiplier) { return Franc(amount * multiplier); }

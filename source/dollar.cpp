#include <TDD/money.hpp>

Dollar::Dollar(int32_t amount) : Money(amount) {}

Money Dollar::times(int32_t multiplier) { return Money(amount * multiplier); }

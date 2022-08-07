#include <TDD/money.hpp>

Dollar::Dollar(int32_t amount) : Money(amount) {}

Dollar Dollar::times(int32_t multiplier) { return Dollar(amount * multiplier); }

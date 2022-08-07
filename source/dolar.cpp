#include <TDD/dollar.hpp>

Dollar::Dollar(int32_t amount) : amount(amount) {}

void Dollar::times(int32_t multiplier) { amount *= multiplier; }

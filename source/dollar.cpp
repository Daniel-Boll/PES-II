#include <TDD/dollar.hpp>

Dollar::Dollar(int32_t amount) : amount(amount) {}

Dollar Dollar::times(int32_t multiplier) {
  return Dollar(amount * multiplier);
}

int32_t Dollar::getAmount() const { return amount; }

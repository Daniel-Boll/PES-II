#include <TDD/franc.hpp>

Franc::Franc(int32_t amount) : amount(amount) {}

Franc Franc::times(int32_t multiplier) { return Franc(amount * multiplier); }

int32_t Franc::getAmount() const { return amount; }

bool Franc::equals(const Franc &other) const { return amount == other.amount; }

bool Franc::operator==(const Franc &other) const { return equals(other); }

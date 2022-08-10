#include <TDD/money.hpp>
#include <TDD/utils.hpp>

int32_t Money::getAmount() const { return amount; }

// FIXME: Couldn't make it..
// template <typename T> bool Money::equals(const T &other) const {
//   // If the types are different, return false.
//   if (std:: instanceof <T>(this) != std:: instanceof <T>(&other)) return false;
//
//   return amount == other.amount;
// }

bool Money::equals(const Money &other) const { return amount == other.amount; }

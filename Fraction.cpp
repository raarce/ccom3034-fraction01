#include <iostream>
#include "Fraction.h"

Fraction::Fraction(int n, int d): numer(n), denom(d) {}

void Fraction::display(ostream& out) {
  out << numer << "/" << denom;
}

Fraction Fraction::operator+(const Fraction&f) const {
  Fraction result(numer * f.denom + denom * f.numer, denom * f.denom);
  return result;
}
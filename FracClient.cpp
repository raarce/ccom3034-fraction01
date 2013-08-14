#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
  Fraction f0(2,7);
  Fraction f1(3,4);
  Fraction f2(1,5);
  Fraction f3;

  cout << "Fraction f0 is: ";  f0.display(cout); cout << endl;
  cout << "Fraction f1 is: ";  f1.display(cout); cout << endl;
  cout << "Fraction f2 is: ";  f2.display(cout); cout << endl;
 
  f3 = f1 + f2;
  
  cout << "Fraction f3 is: ";  f3.display(cout); cout << endl;
}

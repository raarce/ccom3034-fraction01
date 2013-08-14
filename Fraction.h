/*
    Fraction ADT - R. Arce-Nazario
*/

#include <iostream>

using namespace std;


// These preprocessor directives avoid confusion when linking
// the program if two or more source code files include this file.

#ifndef RECT_H
#define RECT_H

class Fraction {
private:
  int numer, denom;
public:

  // constructor
  Fraction(int = 0, int = 1);
 
  // setter  
  void setFraction(int a,int b) 
    { numer = a; denom = b;}
  
  // getters
  int getNumer() const { return numer;}
  int getDenom() const { return denom;}

  void display(ostream&);

  Fraction sum(const Fraction&) const;

};

#endif

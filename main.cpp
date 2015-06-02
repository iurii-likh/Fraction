#include <iostream>

#include "fraction.h"
#include "math_support.h"

#include "test.h"

using namespace std;

int main()
{

    //CONSTRUCTION:
    // Fraction a(nominator, denominator), b(nominator, denominator)
    //
    //MATH:
    // a, b from int or Fraction
    // a (+, -, *, /) b -> Fraction
    //
    //COMPARE:
    // a, b from int or Fraction
    // a (==,!=, >, <, >=, <=) b -> 1/0

    run_all_tests();

    return 0;
}


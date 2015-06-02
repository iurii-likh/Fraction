#ifndef FRACTION_H
#define FRACTION_H

#include <string>

class Fraction
{
    int nominator, denominator, factor;

    friend int gcd(int, int);

    friend std::ostream& operator << (std::ostream&, const Fraction&);

public:

    Fraction(int, int);

    Fraction operator+ (int);
    Fraction operator+ (const Fraction&);

    Fraction operator- ();
    Fraction operator- (int);
    Fraction operator- (const Fraction&);

    Fraction operator* (int);
    Fraction operator* (const Fraction&);

    Fraction operator/ (int);
    Fraction operator/ (const Fraction&);

    bool operator== (int);
    bool operator== (const Fraction&);

    bool operator!= (int);
    bool operator!= (const Fraction&);

    bool operator> (int);
    bool operator> (const Fraction&);

    bool operator< (int);
    bool operator< (const Fraction&);

    bool operator>= (int);
    bool operator>= (const Fraction&);

    bool operator<= (int);
    bool operator<= (const Fraction&);

};



Fraction operator+ (int, const Fraction&);

Fraction operator- (int, const Fraction&);

Fraction operator* (int, const Fraction&);

Fraction operator/ (int, const Fraction&);

bool operator== (int, const Fraction&);

bool operator!= (int, const Fraction&);

bool operator> (int, const Fraction&);

bool operator< (int, const Fraction&);

bool operator>= (int, const Fraction&);

bool operator<= (int, const Fraction&);

bool operator>= (int, const Fraction&);

#endif // FRACTION_H

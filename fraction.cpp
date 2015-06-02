#include <ostream>
#include <string>
#include "fraction.h"
#include "math_support.h"


std::ostream& operator<< (std::ostream &strm, const Fraction &fraction) {

        if (abs(fraction.denominator) == 1) {
            return strm << fraction.nominator / fraction.denominator;
        } else if (abs(fraction.nominator / fraction.denominator) >= 1) {
            return strm << fraction.nominator / fraction.denominator << " "
                        << abs(fraction.nominator % fraction.denominator) << "/"
                        << abs(fraction.denominator);
        } else {
            return strm << fraction.nominator << "/"
                        << fraction.denominator;
        }
}


Fraction::Fraction (int m, int n = 1) {

    if ((m > 0 && n < 0) ||
        (m < 0 && n < 0)) {
        m = -m;
        n = -n;
    }

    factor = abs(gcd(m, n));
    nominator = m / factor;
    denominator = n / factor;

}


Fraction Fraction::operator+ (int that) {
    return Fraction(nominator + that * denominator,
                    denominator);
}


Fraction Fraction::operator+ (const Fraction &that) {
    int d = lcm(denominator, that.denominator);
    return Fraction(nominator * d/denominator + that.nominator * d/that.denominator,
                    d);
}


Fraction Fraction::operator- () {
    return Fraction(- nominator, denominator);
}


Fraction Fraction::operator- (int that) {
    return Fraction(nominator - that * denominator,
                    denominator);
}


Fraction Fraction::operator- (const Fraction &that) {
    int d = lcm(denominator, that.denominator);
    return Fraction(nominator * d/denominator - that.nominator * d/that.denominator,
                    d);
}


Fraction Fraction::operator* (int that) {
    return Fraction(nominator * that,
                    denominator);
}


Fraction Fraction::operator* (const Fraction &that) {
    return Fraction(nominator * that.nominator,
                    denominator * that.denominator);
}


Fraction Fraction::operator/ (int that) {
    if (that != 0) {
        return Fraction(nominator,
                        denominator * that);
    } else {
        return Fraction(nominator,
                        denominator * that);
    }

}


Fraction Fraction::operator/ (const Fraction &that) {
    return Fraction(nominator * that.denominator,
                    denominator * that.nominator);
}

bool Fraction::operator== (int that) {
    return *this == Fraction(that);
}

bool Fraction::operator== (const Fraction& that) {
    return nominator == that.nominator && denominator == that.denominator;
}


bool Fraction::operator!= (int that) {
    return !(*this == Fraction(that));
}


bool Fraction::operator!= (const Fraction& that) {
    return !(Fraction(nominator, denominator) == that);
}


bool Fraction::operator> (int that) {
    return *this > Fraction(that);
}

bool Fraction::operator> (const Fraction& that) {
    int d = lcm(denominator, that.denominator);
    return nominator * d/denominator > that.nominator * d/that.denominator;
}


bool Fraction::operator< (int that) {
    return *this < Fraction(that);
}

bool Fraction::operator< (const Fraction& that) {
    int d = lcm(denominator, that.denominator);
    return nominator * d/denominator < that.nominator * d/that.denominator;
}


bool Fraction::operator<= (int that) {
    return *this < Fraction(that) ||
            *this == Fraction(that);
}

bool Fraction::operator<= (const Fraction& that) {
    int d = lcm(denominator, that.denominator);
    return nominator * d/denominator < that.nominator * d/that.denominator ||
           nominator * d/denominator == that.nominator * d/that.denominator;
}


bool Fraction::operator>= (int that) {
    return *this > Fraction(that) ||
            *this == Fraction(that);
}

bool Fraction::operator>= (const Fraction& that) {
    int d = lcm(denominator, that.denominator);
    return nominator * d/denominator > that.nominator * d/that.denominator ||
           nominator * d/denominator == that.nominator * d/that.denominator;
}



Fraction operator+ (int i, const Fraction& fraction) {
    return Fraction(i) + fraction;
}


Fraction operator- (int i, const Fraction& fraction) {
    return Fraction(i) - fraction;
}


Fraction operator* (int i, const Fraction& fraction) {
    return Fraction(i) * fraction;
}


Fraction operator/ (int i, const Fraction& fraction) {
    return Fraction(i) / fraction;
}


bool operator== (int i, const Fraction& fraction) {
    return Fraction(i) == fraction;
}

bool operator!= (int i, const Fraction& fraction) {
    return !(Fraction(i) == fraction);
}

bool operator> (int i, const Fraction& fraction) {
    return Fraction(i) > fraction;
}

bool operator< (int i, const Fraction& fraction) {
    return Fraction(i) < fraction;
}


bool operator<= (int i, const Fraction& fraction) {
    return Fraction(i) < fraction ||
           Fraction(i) == fraction ;
}


bool operator>= (int i, const Fraction& fraction) {
    return Fraction(i) > fraction ||
           Fraction(i) == fraction ;
}

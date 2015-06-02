#include <iostream>
#include "fraction.h"

using namespace std;


void test_print() {
    cout << "=== Printing tests: ===" <<endl <<endl;

    cout << "Fraction( 2,  3) = " << Fraction(2, 3) <<endl
         << "Fraction(-2,  3) = " << Fraction(-2, 3) << endl
         << "Fraction( 2, -3) = " << Fraction(2, -3) << endl
         << "Fraction(-2, -3) = " << Fraction(-2, -3) << endl << endl;

    cout << "Fraction( 6,  6) = " << Fraction(6, 6) << endl
         << "Fraction(-6,  6) = " << Fraction(-6, 6) << endl
         << "Fraction( 6, -6) = " << Fraction(6, -6) << endl
         << "Fraction(-6, -6) = " << Fraction(-6, -6) << endl << endl;

    cout << "Fraction( 6,  3) = " << Fraction(6, 3) << endl
         << "Fraction(-6,  3) = " << Fraction(-6, 3) << endl
         << "Fraction( 6, -3) = " << Fraction(6, -3) << endl
         << "Fraction(-6, -3) = " << Fraction(-6, -3) << endl << endl;

    cout << "Fraction( 16,  6) = " << Fraction(16, 6) << endl
         << "Fraction(-16,  6) = " << Fraction(-16, 6) << endl
         << "Fraction( 16, -6) = " << Fraction(16, -6) << endl
         << "Fraction(-16, -6) = " << Fraction(-16, -6) << endl << endl;

    cout << "Fraction( 2,  4) = " << Fraction(2, 4) << endl
         << "Fraction(-2,  4) = " << Fraction(-2, 4) << endl
         << "Fraction( 2, -4) = " << Fraction(2, -4) << endl
         << "Fraction(-2, -4) = " << Fraction(-2, -4) << endl << endl;

    cout << "Fraction( 168,  13) = " << Fraction(168, 13) << endl
         << "Fraction( 169,  13) = " << Fraction(169, 13) << endl
         << "Fraction( 170,  13) = " << Fraction(170, 13) << endl << endl;

    cout << "=======================" << endl <<endl;
}

void test_reflect() {
    cout << "=== Negative tests: ===" <<endl <<endl;

    cout << "-( 2/ 3) = " << (- Fraction(2, 3)) <<endl
         << "-(-2/ 3) = " << (- Fraction(-2, 3)) <<endl
         << "-( 2/-3) = " << (- Fraction(2, -3)) <<endl
         << "-(-2/-3) = " << (- Fraction(-2, -3)) <<endl << endl;

    cout << "=======================" <<endl <<endl;
}

void test_addition() {
    cout << "=== Addition tests: ===" <<endl <<endl;

    cout << " 2/3 +   3/4  = " << Fraction(2, 3) + Fraction(3, 4) <<endl
         << "-2/3 +   3/4  = " << Fraction(-2, 3) + Fraction(3, 4) <<endl
         << " 2/3 + (-3/4) = " << Fraction(2, 3) + Fraction(-3, 4) <<endl
         << "-2/3 + (-3/4) = " << Fraction(-2, 3) + Fraction(-3, 4) <<endl << endl;

    cout << "2/3 + 0 = " << Fraction(2, 3) + 0 <<endl
         << "2/3 + 2 = " << Fraction(2, 3) + 2 <<endl
         << "2/3 + (-2) = " << Fraction(2, 3) + (-2) <<endl
         << "0 + 2/3 = " << 0 + Fraction(2, 3) <<endl
         << " 2 + 2/3 = " << 2 + Fraction(2, 3) <<endl
         << "-2 + 2/3 = " << -2 + Fraction(2, 3) <<endl<< endl;

    cout << "=======================" <<endl <<endl;
}

void test_multiplication() {
    cout << "=== Multiplication tests: ===" <<endl <<endl;

    cout << " 2/3 * 3/7 = " << Fraction(2, 3) * Fraction(3, 7) <<endl
         << "-2/3 * 3/7 = " << Fraction(-2, 3) * Fraction(3, 7) <<endl
         << " 2/3 * (-3/7) = " << Fraction(2, 3) * Fraction(-3, 7) <<endl
         << "-2/3 * (-3/7) = " << Fraction(-2, 3) * Fraction(-3, 7) <<endl << endl;

    cout << " 4/3 * 9/7 = " << Fraction(4, 3) * Fraction(9, 7) <<endl
         << "-4/3 * 9/7 = " << Fraction(-4, 3) * Fraction(9, 7) <<endl
         << " 4/3 * (-9/7) = " << Fraction(4, 3) * Fraction(-9, 7) <<endl
         << "-4/3 * (-9/7) = " << Fraction(-4, 3) * Fraction(-9, 7) <<endl << endl;

    cout << " 4/3 * 3/4 = " << Fraction(4, 3) * Fraction(3, 4) <<endl
         << "-4/3 * 3/4 = " << Fraction(-4, 3) * Fraction(3, 4) <<endl
         << " 4/3 * (-3/4) = " << Fraction(4, 3) * Fraction(-3, 4) <<endl
         << "-4/3 * (-3/4) = " << Fraction(-4, 3) * Fraction(-3, 4) <<endl << endl;

    cout << "2/3 * 0 = " << Fraction(2, 3) * 0 <<endl
         << "2/3 * 2 = " << Fraction(2, 3) * 2 <<endl
         << "2/3 * (-2) = " << Fraction(2, 3) * (-2) <<endl
         << "0 * 2/3 = " << 0 * Fraction(2, 3) <<endl
         << "2 * 2/3  = " << 2 * Fraction(2, 3)<<endl
         << "-2 * 2/3 = " << -2 * Fraction(2, 3) <<endl << endl;

    cout << "=============================" <<endl <<endl;
}

void test_substraction() {
    cout << "=== Substraction tests: ===" <<endl <<endl;

    cout << " 2/3 -   3/4  = " << Fraction(2, 3) - Fraction(3, 4) <<endl
         << "-2/3 -   3/4  = " << Fraction(-2, 3) - Fraction(3, 4) <<endl
         << " 2/3 - (-3/4) = " << Fraction(2, 3) - Fraction(-3, 4) <<endl
         << "-2/3 - (-3/4) = " << Fraction(-2, 3) - Fraction(-3, 4) <<endl << endl;

    cout << "2/3 - 0 = " << Fraction(2, 3) - 0 <<endl
         << "2/3 - 2 = " << Fraction(2, 3) - 2 <<endl
         << "2/3 - (-2) = " << Fraction(2, 3) - (-2) <<endl
         << "0 - 2/3 - 0 = " << 0 - Fraction(2, 3) <<endl
         << "2 - 2/3 = " << 2 - Fraction(2, 3)<<endl
         << "-2 - 2/3 = " << -2 - Fraction(2, 3)<<endl << endl;

    cout << "===========================" <<endl <<endl;
}

void test_division() {
    cout << "=== Division tests: ===" <<endl <<endl;

    cout << " 2/3 / 3/7 = " << Fraction(2, 3) / Fraction(3, 7) <<endl
         << "-2/3 / 3/7 = " << Fraction(-2, 3) / Fraction(3, 7) <<endl
         << " 2/3 / (-3/7) = " << Fraction(2, 3) / Fraction(-3, 7) <<endl
         << "-2/3 / (-3/7) = " << Fraction(-2, 3) / Fraction(-3, 7) <<endl << endl;

    cout << " 4/3 / 9/7 = " << Fraction(4, 3) / Fraction(9, 7) <<endl
         << "-4/3 / 9/7 = " << Fraction(-4, 3) / Fraction(9, 7) <<endl
         << " 4/3 / (-9/7) = " << Fraction(4, 3) / Fraction(-9, 7) <<endl
         << "-4/3 / (-9/7) = " << Fraction(-4, 3) / Fraction(-9, 7) <<endl << endl;

    cout << " 4/3 / 3/4 = " << Fraction(4, 3) / Fraction(3, 4) <<endl
         << "-4/3 / 3/4 = " << Fraction(-4, 3) / Fraction(3, 4) <<endl
         << " 4/3 / (-3/4) = " << Fraction(4, 3) / Fraction(-3, 4) <<endl
         << "-4/3 / (-3/4) = " << Fraction(-4, 3) / Fraction(-3, 4) <<endl << endl;

    cout //<< "2/3 / 0 = " << Fraction(2, 3) / Fraction(0, 1) <<endl
         //<< "2/3 / 0 = " << Fraction(2, 3) / 0 <<endl
         << "2/3 / 2 = " << Fraction(2, 3) / 2 <<endl
         << "2/3 / (-2) = " << Fraction(2, 3) / (-2) <<endl
         << " 2 / 2/3 = " << 2 / Fraction(2, 3) <<endl
         << "-2 / 2/3 = " << -2 / Fraction(2, 3) <<endl << endl;

    cout << "=======================" <<endl <<endl;
}


void test_equality() {
    cout << "=== Equality tests: ===" <<endl <<endl;

    cout << " 2/3 == 2/3 ? " << (Fraction(2, 3) == Fraction(2, 3)) <<endl
         << " 2/3 == 4/6 ? " << (Fraction(2, 3) == Fraction(4, 6)) <<endl
         << " 2/3 == 1/3 ? " << (Fraction(2, 3) == Fraction(1, 3)) <<endl
         << " 6/3 == 2   ? " << (Fraction(6, 3) == 2) <<endl
         << " 3 == 9/3   ? " << (3 == Fraction(9, 3)) <<endl <<endl;

    cout << "=======================" <<endl <<endl;
}


void test_non_equality() {
    cout << "=== Non-Equality tests: ===" <<endl <<endl;

    cout << " 1/3 != 2/3 ? " << (Fraction(1, 3) != Fraction(2, 3)) <<endl
         << " 2/3 != 2/3 ? " << (Fraction(2, 3) != Fraction(2, 3)) <<endl
         << " 2/3 != 4/6 ? " << (Fraction(2, 3) != Fraction(4, 6)) <<endl
         << " 6/3 != 2   ? " << (Fraction(6, 3) != 2) <<endl
         << " 3 != 9/3   ? " << (3 != Fraction(9, 3)) <<endl <<endl;

    cout << "===========================" <<endl <<endl;
}

void test_left_gt_right() {
    cout << "=== Left > Right: ===" <<endl <<endl;

    cout << " 2/3 > 1/3 ? " << (Fraction(2, 3) > Fraction(1, 3)) <<endl
         << " 1/3 > 2/3 ? " << (Fraction(1, 3) > Fraction(2, 3)) <<endl
         << " 2/3 > 4/6 ? " << (Fraction(2, 3) > Fraction(4, 6)) <<endl
         << " 7/3 > 2   ? " << (Fraction(7, 3) > 2) <<endl
         << " 7/3 > 3   ? " << (Fraction(7, 3) > 3) <<endl
         << " 2 > 7/3   ? " << (2 > Fraction(7, 3)) <<endl
         << " 3 > 7/3   ? " << (3 > Fraction(7, 3)) <<endl <<endl;

    cout << "=====================" <<endl <<endl;
}

void test_left_lt_right() {
    cout << "=== Left < Right: ===" <<endl <<endl;

    cout << " 2/3 < 1/3 ? " << (Fraction(2, 3) < Fraction(1, 3)) <<endl
         << " 1/3 < 2/3 ? " << (Fraction(1, 3) < Fraction(2, 3)) <<endl
         << " 2/3 < 4/6 ? " << (Fraction(2, 3) < Fraction(4, 6)) <<endl
         << " 7/3 < 2   ? " << (Fraction(7, 3) < 2) <<endl
         << " 7/3 < 3   ? " << (Fraction(7, 3) < 3) <<endl
         << " 2 < 7/3   ? " << (2 < Fraction(7, 3)) <<endl
         << " 3 < 7/3   ? " << (3 < Fraction(7, 3)) <<endl <<endl;

    cout << "=====================" <<endl <<endl;
}


void test_left_le_right() {
    cout << "=== Left <= Right: ===" <<endl <<endl;

    cout << " 2/3 <= 1/3 ? " << (Fraction(2, 3) <= Fraction(1, 3)) <<endl
         << " 1/3 <= 2/3 ? " << (Fraction(1, 3) <= Fraction(2, 3)) <<endl
         << " 2/3 <= 4/6 ? " << (Fraction(2, 3) <= Fraction(4, 6)) <<endl
         << " 7/3 <= 2   ? " << (Fraction(7, 3) <= 2) <<endl
         << " 6/3 <= 2   ? " << (Fraction(6, 3) <= 2) <<endl
         << " 7/3 <= 3   ? " << (Fraction(7, 3) <= 3) <<endl
         << " 2 <= 7/3   ? " << (2 <= Fraction(7, 3)) <<endl
         << " 14/6 <= 7/3   ? " << (Fraction(14, 6) <= Fraction(7, 3)) <<endl
         << " 3 <= 7/3   ? " << (3 <= Fraction(7, 3)) <<endl <<endl;

    cout << "======================" <<endl <<endl;
}


void test_left_ge_right() {
    cout << "=== Left >= Right: ===" <<endl <<endl;

    cout << " 2/3 >= 1/3 ? " << (Fraction(2, 3) >= Fraction(1, 3)) <<endl
         << " 1/3 >= 2/3 ? " << (Fraction(1, 3) >= Fraction(2, 3)) <<endl
         << " 2/3 >= 4/6 ? " << (Fraction(2, 3) >= Fraction(4, 6)) <<endl
         << " 7/3 >= 2   ? " << (Fraction(7, 3) >= 2) <<endl
         << " 6/3 >= 2   ? " << (Fraction(6, 3) >= 2) <<endl
         << " 7/3 >= 3   ? " << (Fraction(7, 3) >= 3) <<endl
         << " 2 >= 7/3   ? " << (2 >= Fraction(7, 3)) <<endl
         << " 14/6 >= 7/3   ? " << (Fraction(14, 6) >= Fraction(7, 3)) <<endl
         << " 3 >= 7/3   ? " << (3 >= Fraction(7, 3)) <<endl <<endl;

    cout << "======================" <<endl <<endl;
}


void run_all_tests() {
        test_print(); //OK

        test_reflect(); //OK

        test_addition(); //OK

        test_substraction(); //OK

        test_multiplication(); //OK

        test_division(); //OK

        test_equality(); //OK

        test_non_equality(); //OK

        test_left_gt_right(); //OK

        test_left_lt_right(); //OK

        test_left_le_right(); //OK

        test_left_ge_right(); //OK
}

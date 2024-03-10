// division.cpp
// Division
// Does long division with steps

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int x, y; // divisor, dividend
    long long int q, r; // quotient, remainder

    cout << "  ____" << endl;
    cout << "x | y" << endl;
    cout << "Where x is the divisor and y is the dividend" << endl << endl;

    cout << "Input the divisor: ";
    cin >> x;
    cout << "Input the dividend: ";
    cin >> y;

    q = y / x; // Integer division
    r = y % x; // Remiander

    cout << y << "/" << x << " = " << q << " remainder " << r << endl;
    // cout << x << "%" << y << " = " << r << endl;
}



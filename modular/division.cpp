// division.cpp
// Division
// Does long division with steps

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int x, y; // divisor, dividend
    long long int q, r; // quotient, remainder

    cout << "Input the divisor: ";
    cin >> x;
    cout << "Input the dividend: ";
    cin >> y;

    q = x / y; // Integer division
    r = x % y; // Remiander

    cout << x << "/" << y << " = " << q << " remainder " << r << endl;
    // cout << x << "%" << y << " = " << r << endl;
}



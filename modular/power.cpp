// power.cpp
// Modular powers
// Clever way of computing modular powers rather than computing the power and then taking modulus

#include <iostream>
using namespace std;

int main() {
    int base, power, mod, i, num, result;
    cout << "Modular power solver\nb^p (mod m)\n";

    cout << "Enter the base (b): ";
    cin >> base;
    cout << "Enter the power (p): ";
    cin >> power;
    cout << "Enter the modulo (m): ";
    cin >> mod;

    num = base;
    for (i = 2; i <= power; i++) {
        // cout << base << "^" << i << " mod " << mod;
        num = (num * base) % mod;
        // cout << " = " << num << endl;
    }
    result = num;
    cout << "Result of " << base << "^" << power << " mod " << mod << " is " << result << endl;

    return 0;
}
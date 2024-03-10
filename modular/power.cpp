// power.cpp
// Modular powers
// Clever way of computing modular powers rather than computing the power and then taking modulus

#include <iostream>
using namespace std;

int main() {
    int base, power, mod, i, num, result;
    char choice;
    bool steps;
    cout << "Modular power solver\nb^p (mod m)\n";

    cout << "Show intermediate steps? (y/n): ";
    cin >> choice;
    steps = choice == 'y' ? 1 : 0;

    cout << "Enter the base (b): ";
    cin >> base;
    cout << "Enter the power (p): ";
    cin >> power;
    cout << "Enter the modulo (m): ";
    cin >> mod;

    num = base;
    if (steps) {
        for (i = 2; i <= power; i++) {
            cout << base << "^" << i << " mod " << mod;
            num = (num * base) % mod;
            cout << " = " << num << endl;
        }
    } else {
        for (i = 2; i <= power; i++)
            num = (num * base) % mod;
    }

    result = num;
    cout << "Result of " << base << "^" << power << " mod " << mod << " is " << result << endl;

    return 0;
}
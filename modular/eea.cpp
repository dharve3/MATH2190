// eea.cpp
// Extended Euclidean Algorithm

#include <iostream>
using namespace std;

bool steps = true; // Global var to show/hide steps

// Function to compute the extended Euclidean algorithm
// Returns gcd(a, b) and updates the values of u and v such that au + bv = gcd(a, b)
int extendedEuclidean(int a, int b, int &u, int &v) {
    int u1 = 0, v1 = 1;
    int u2 = 1, v2 = 0;
    int q, r;

    if (steps) {
        cout << "Step 0: r0 = " << a << endl;
        cout << "Step 1: r1 = " << b << endl;

        int step = 2;
        while (b != 0) {
            q = a / b;
            r = a % b;

            cout << "Step " << step++ << ": r" << step-1 << " = " << b << " = " << r << " * " << q << " + " << r << endl;

            int temp_u = u2;
            int temp_v = v2;
            u2 = u1 - q * u2;
            v2 = v1 - q * v2;
            u1 = temp_u;
            v1 = temp_v;

            cout << "Step " << step++ << ": u" << step/2-1 << " = " << u2 << ", v" << step/2-1 << " = " << v2 << endl;

            a = b;
            b = r;
        }

        u = u1;
        v = v1;
        return a;
    } else {
        // Base case
        if (a == 0) {
            u = 0;
            v = 1;
            return b;
    }

    // Recursive call
    int u1, v1;
    int gcd = extendedEuclidean(b % a, a, u1, v1);

    // Update u and v using results of recursive call
    u = v1 - (b / a) * u1;
    v = u1;

    return gcd;
    }

}

int main() {
    int a, b;
    cout << "Enter two positive integers a and b: ";
    cin >> a >> b;

    int u, v;
    int gcd = extendedEuclidean(a, b, u, v);

    cout << "The GCD of " << a << " and " << b << " is: " << gcd << endl;
    cout << "The coefficients u and v such that au + bv = gcd(a, b) are: " << u << " and " << v << endl;

    return 0;
}

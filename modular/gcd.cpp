// gcd.cpp
// Greatest Common Divisor using euclidean algorithm

#include <iostream> 
using namespace std; 

bool steps = false; // Global var to show/hide steps

// Recursive function to return gcd of a and b 
int gcd(int a, int b) {
    int r_prev = a;
    int r = b;
    int q;
    int step = 0;


    if (steps) {
        cout << "Step " << step++ << ": r0 = " << r_prev << endl;
        cout << "Step " << step++ << ": r1 = " << r << endl;
        while (r != 0) {
        q = r_prev / r;
        int temp = r;
        r = r_prev % r;
        r_prev = temp;

        if (r != 0)
            cout << "Step " << step++ << ": r" << step-1 << " = " << r_prev << " = " << r << " * " << q << " + " << r << endl;
        else
            cout << "Step " << step++ << ": r" << step-1 << " = " << r_prev << endl;
        }
    } else {
        while (r != 0) {
        q = r;
        r = r_prev % r;
        r_prev = q;
        }
    }

    return r_prev;
}

int main() 
{ 
    int a, b, temp;
    cout << "Enter two positive integers (a b) separated by a space: ";
    cin >> a >> b;
    cout << "Show steps? (1 yes, 0 no): ";
    cin >> steps;

    if (a < b)
        swap(a, b);

    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << result << endl;

    return 0; 
}

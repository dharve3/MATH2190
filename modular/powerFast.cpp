// Improved version of power.cpp
// Using square and multiply algorithm to reduce computations

#include <iostream>
using namespace std;
 
long int exponentiation(long int base, long int exp, long int n) {
    if (exp == 0)
        return 1;
 
    if (exp == 1)
        return base % n;
 
    long int t = exponentiation(base, exp / 2, n);
    t = (t * t) % n;
 
    if (exp % 2 == 0)
        return t;
 
    else
        return ((base % n) * t) % n;
}
 
int main() {
    long int base = 5;
    long int exp = 100000;
    long int mod = 269;
 
    long int result = exponentiation(base, exp, mod);
    cout << result << endl;
    return 0;
}
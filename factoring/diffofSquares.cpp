// diffofSquares.cpp
// Difference of Squares
// Preforms factoring using difference of squares method

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, i, result, f1, f2;
    double root;

    cout << "Enter a number (N) to factor: ";
    cin >> num;

    for(i = 0; i <= 500; i++) { // starting at 0 in case user enters a perfect square
        result = num + i*i;
        root = sqrt(result);
        cout << "N + " << i << "^2 = " << num << " + " << i*i << " = " << result << endl;
        if (root == floor(root)) {
            cout << num << " is a perfect square! (" << root << ")" << endl;
        break;
        }
    }

    f1 = (root + i);
    f2 = (root - i);
    cout << "N = " << root << "^2 - " << i << "^2 = " << "(" << root << " + " << i << ")(" << root << " - " << i << ")" << endl;
    cout << "The factors of " << num << " are: " << f1 << " and " << f2 << endl;
}
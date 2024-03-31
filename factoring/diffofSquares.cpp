// diffofSquares.cpp
// Difference of Squares
// Preforms factoring using difference of squares method

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, i, result;
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
}
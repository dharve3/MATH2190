// caesarCipher.cpp
// Shifts letters up/down a specified amount

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string encrypt(string text, int s) {
    string result = "";
    // cout << "\nDEBUG: Encrypting with key " << s << endl;
 
    for (int i = 0; i < text.length(); i++) {
        // Skips the character if it is not a letter
        if (!isalpha(text[i])) {
            result += text[i];
            continue;
        }
        // Encrypt Uppercase Letters
        if (isupper(text[i])) {
            result += char(int(text[i] - 'A' + s) % 26 + 'A');
            // cout << "DEBUG: Char at " << i << ": " << result[i] << endl;
        }
        // Encrypt Lowercase Letters
        else {
            result += char(int(text[i] - 'a' + s) % 26 + 'a');
            // cout << "DEBUG: Char at " << i << ": " << result[i] << endl;
        }
            
    }
 
    return result;
}

string decrypt(string text, int shift) {
    // cout << "\nDEBUG: Decrypting with key " << shift << endl;
    return encrypt(text, (26 - (shift % 26)));
}

int main() {
    string input, text;
    input = text = "";
    char choice;
    int shift = 0;
    cout << "Welcome to Caesar/Shift Cipher!\n"
         << "1. Encrypt\n"
         << "2. Decrypt\n"
         << "3. Exit\n";
    getline(cin, input);
    stringstream(input) >> choice;

    switch (choice) {
    case '1':
        cout << "Enter message to encrypt: ";
        getline(cin, text);
        cout << "Enter shift: ";
        getline(cin, input);
        stringstream(input) >> shift;
        cout << "Cipher: " << encrypt(text, shift);
        break;
    case '2':
        cout << "Enter message to decrypt: ";
        getline(cin, text);
        cout << "Enter shift used: ";
        getline(cin, input);
        stringstream(input) >> shift;
        cout << "Message: " << decrypt(text, shift);
        break;
    case '3':
        cout << "Exiting...\n";
        exit(0);
        break;
    default:
        cout << "Invalid Choice, Exiting...\n";
        exit(0);
        break;
    }

    return 0;
}
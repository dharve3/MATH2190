// substitutionCipher.cpp
// Substitutes each letter with another in the alphabet, in no particular order

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Function to encrypt plaintext using substitution cipher
string encrypt(const string &plaintext, const unordered_map<char, char> &key) {
    string ciphertext;
    for (char c : plaintext) {
        if (key.find(c) != key.end()) {
            ciphertext += key.at(c);
        } else {
            ciphertext += c; // If character not found in the key, keep it unchanged
        }
    }
    return ciphertext;
}

// Function to decrypt ciphertext using substitution cipher
string decrypt(const string &ciphertext, const unordered_map<char, char> &key) {
    string plaintext;
    for (char c : ciphertext) {
        bool found = false;
        for (auto it = key.begin(); it != key.end(); ++it) {
            if (it->second == c) {
                plaintext += it->first;
                found = true;
                break;
            }
        }
        if (!found) {
            plaintext += c; // If character not found in the key, keep it unchanged
        }
    }
    return plaintext;
}

int main() {
    string substitutions;
    cout << "Welcome to Substituion Cipher!";
    cout << "EXAMPLE KEY:\n"
         << "abcdefghijklmnopqrstuvwxyz\n"
         << "CISQVNFOWAXMTGUHPBKLREYDZJ <- You enter this\n\n";
    cout << "Enter the substitutions:\n"
         << "abcdefghijklmnopqrstuvwxyz maps to:\n";
    getline(cin, substitutions);

    for (char &c : substitutions) {
        c = tolower(c);
    }

    unordered_map<char, char> substitutionKey;
    for (size_t i = 0; i < substitutions.size(); ++i) {
        substitutionKey['a' + i] = substitutions[i];
    }

    string plaintext;
    cout << "Enter the plaintext: ";
    getline(cin, plaintext);

    for (char &c : plaintext) {
        c = tolower(c);
    }

    string ciphertext = encrypt(plaintext, substitutionKey);
    cout << "\nEncrypted text: " << ciphertext << endl;

    string decryptedText = decrypt(ciphertext, substitutionKey);
    cout << "Decrypted text: " << decryptedText << endl;

    return 0;
}

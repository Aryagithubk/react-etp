#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char shiftChar(char c, int offset) {
    if (isupper(c)) {
        return 'A' + (c - 'A' - offset + 26) % 26;
    } else if (islower(c)) {
        return 'a' + (c - 'a' - offset + 26) % 26;
    } else {
        return c;
    }
}

string decipher(string cipherText, string knownWord) {
    size_t pos = 0;
    string word;
    for (size_t i = 0; i < cipherText.length(); i++) {
        if (isspace(cipherText[i]) || ispunct(cipherText[i]) || i == cipherText.length() - 1) {
            if (i == cipherText.length() - 1 && !isspace(cipherText[i]) && !ispunct(cipherText[i])) {
                word += cipherText[i];
            }
            if (word.length() == knownWord.length()) {
                int shift = (word[0] - knownWord[0] + 26) % 26;
                bool match = true;
                for (size_t j = 0; j < knownWord.length(); j++) {
                    if ((word[j] - knownWord[j] + 26) % 26 != shift) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    string result = "";
                    for (char c : cipherText) {
                        result += shiftChar(c, shift);
                    }
                    return result;
                }
            }
            word = "";
        } else {
            word += cipherText[i];
        }
    }
    return "Invalid";
}

int main() {
    string a, b;
    a = "cdeb naxg"
    cout << decipher(a, b) << endl;

    string cipherText2 = "cdeb naxg";
    string knownWord2 = "love";
    cout << decipher(cipherText2, knownWord2) << endl;

    return 0;
}
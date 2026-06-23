#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        // Check if character is an alphabet
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels = " << vowels << endl;
    cout << "Number of consonants = " << consonants << endl;

    return 0;
}
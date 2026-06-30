#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, words[100];
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string word = "";

    // Split sentence into words
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            words[count++] = word;
            word = "";
        } else {
            word += str[i];
        }
    }

    // Sort words by length (Bubble Sort)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < count; i++) {
        cout << words[i] << " ";
    }

    return 0;
}
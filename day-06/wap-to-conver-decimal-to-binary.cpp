#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal != 0) {
        remainder = decimal % 2;
        binary += remainder * place;
        decimal /= 2;
        place *= 10;
    }

    cout << "Binary number = " << binary;
    return 0;
}
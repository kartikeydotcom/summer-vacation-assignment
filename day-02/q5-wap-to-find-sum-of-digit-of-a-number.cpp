#include <iostream>
using namespace std;

int main() {
    int n, sum;

    cout << "Enter the number: ";
    cin >> n;

    sum = 0;

    while (n > 0) {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;     
    }

    cout << "Sum of digits is: " << sum;

    return 0;
}
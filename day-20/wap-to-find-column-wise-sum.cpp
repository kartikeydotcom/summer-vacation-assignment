#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[10][10];

    // Input matrix
    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Column-wise sum
    cout << "Column-wise sum is:\n";
    for(int j = 0; j < cols; j++) {
        int sum = 0;
        for(int i = 0; i < rows; i++) {
            sum = sum + A[i][j];
        }
        cout << "Sum of column " << j+1 << " = " << sum << endl;
    }

    return 0;
}
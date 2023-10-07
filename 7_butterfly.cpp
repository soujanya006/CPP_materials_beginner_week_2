#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for half of the butterfly: ";
    cin >> n;

    // Upper half of the butterfly
    for (int row = 1; row <= n; row++) {
        // Printing stars for the left wing
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        // Printing spaces in between
        for (int col = 1; col <= 2*n - 2*row; col++) {
            cout << "  ";
        }
        // Printing stars for the right wing
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half of the butterfly (it's symmetric to the upper half)
    for (int row = n; row >= 1; row--) {
        // Printing stars for the left wing
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        // Printing spaces in between
        for (int col = 1; col <= 2*n - 2*row; col++) {
            cout << "  ";
        }
        // Printing stars for the right wing
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

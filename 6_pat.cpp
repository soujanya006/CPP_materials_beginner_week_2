#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the row number: ";
    cin >> n;

    // Top half of the diamond
    for (int row = 0; row < n; row++) {
        // Spaces for left padding
        for (int col = 0; col < n - row - 1; col++) {
            cout << "  ";
        }
        // Descending numbers
        for (int col = row + 1; col >= 1; col--) {
            cout << col << " ";
        }
        // Ascending numbers
        for (int col = 2; col <= row + 1; col++) {
            cout << col << " ";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int row = 0; row < n - 1; row++) {
        // Spaces for left padding
        for (int col = 0; col < row + 1; col++) {
            cout << "  ";
        }
        // Descending numbers
        for (int col = n - row - 1; col >= 1; col--) {
            cout << col << " ";
        }
        // Ascending numbers
        for (int col = 2; col <= n - row - 1; col++) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}

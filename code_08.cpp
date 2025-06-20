#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long coeff = 1; // First element is always 1

    for (int i = 0; i <= n; i++) {
        cout << coeff << " ";
        coeff = coeff * (n - i) / (i + 1); // Compute next coefficient
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    // Iterate through the numerators and denominators
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        sum += static_cast<double>(numerator) / denominator;
    }

    // Output the result
    cout << " Sum of the series should be:  " << sum << endl;

    return 0;
}
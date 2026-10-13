#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sum = 0.0;
    double term = 1.0;

    for (int i = 1; i <= 30; i++) {
        sum += term;
        term /= 2.0;
    }

    cout << fixed << setprecision(10);
    cout << "Sum of first 30 terms: " << sum << endl;

    sum = 0.0;
    term = 1.0;

    for (int i = 1; i <= 1000; i++) {
        sum += term;
        term /= 2.0;
    }

    cout << "Sum of first 1000 terms: " << sum << endl;

    return 0;
}
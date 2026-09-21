#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;

    int sum = a + b;
    int difference = a - c;
    int product = b * c;
    int quotient = a / c;
    int remainder = c % a;

    cout << "Sum of a and b: " << sum << endl;
    cout << "Difference of a and c: " << difference << endl;
    cout << "Product of b and c: " << product << endl;
    cout << "Division of a and c: " << quotient << endl;
    cout << "Remainder of c and a: " << remainder << endl;

    return 0;
}
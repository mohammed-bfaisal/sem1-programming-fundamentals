#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, d;

    cout << "Enter a four-digit integer: ";
    cin >> n;

    a = (n / 1000) % 10;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;

    a = (a + 1) % 10;
    b = (b + 1) % 10;
    c = (c + 1) % 10;
    d = (d + 1) % 10;

    int encrypted = c * 1000 + d * 100 + a * 10 + b;

    cout << "Encrypted integer: " << encrypted << endl;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a;
    cout << "Enter a number: ";
    cin >> a;

    double root = cbrt(a);
    cout << "Cube root = " << root << endl;
    return 0;
}
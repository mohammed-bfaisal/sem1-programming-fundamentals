#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter first side: ";
    cin >> a;
    cout << "Enter second side: ";
    cin >> b;

    c = sqrt((a * a) + (b * b));
    cout << "Hypotenuse = " << c << endl;
    return 0;
}
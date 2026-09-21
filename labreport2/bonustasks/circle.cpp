#include <iostream>
using namespace std;

#define PI 3.14

int main() {
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    float circumference = 2 * PI * r;

    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
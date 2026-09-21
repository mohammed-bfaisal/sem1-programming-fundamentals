#include <iostream>
using namespace std;
#define PI 3.14159
int main() {
    float radius, area;
    cout << "Enter radius: ";
    cin >> radius;

    area = PI * radius * radius;
    cout << "Area of Circle = " << area << endl;
    return 0;
}
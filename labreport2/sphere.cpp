#include <iostream>
using namespace std;
#define PI 3.14159
int main() {
    float radius, volume, surfaceArea;
    cout << "Enter radius: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    surfaceArea = 4 * PI * radius * radius;

    cout << "Volume of Sphere = " << volume << endl;
    cout << "Surface Area of Sphere = " << surfaceArea << endl;
    return 0;
}
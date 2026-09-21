#include <iostream>
using namespace std;
int main() {
    float a, b, average;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    average = (a + b) / 2;
    cout << "Average = " << average << endl;
    return 0;
}
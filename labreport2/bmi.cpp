#include <iostream>
using namespace std;
int main() {
    float weight, height, bmi;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / (height * height);
    cout << "BMI = " << bmi << endl;
    return 0;
}
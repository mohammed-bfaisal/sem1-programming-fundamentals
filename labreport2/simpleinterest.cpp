#include <iostream>
using namespace std;
int main() {
    float P, R, T, SI;
    cout << "Enter principal amount: ";
    cin >> P;
    cout << "Enter rate: ";
    cin >> R;
    cout << "Enter time (years): ";
    cin >> T;

    SI = (P * R * T) / 100;
    cout << "Simple Interest = " << SI << endl;
    return 0;
}
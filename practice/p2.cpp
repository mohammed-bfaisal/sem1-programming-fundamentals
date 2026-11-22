#include <iostream>
using namespace std;

int main() {
    int num;
    int maxVal = 0, minVal = 10000000;   // minVal starts at 0 -> intentional logical error

    cout << "Enter numbers (enter 0 to stop):" << endl;
    cin >> num;

    if (num != 0) {
        while (num != 0) {        // zero is excluded by the loop condition
            if (num > maxVal) {
                maxVal = num;
            }
            if (num < minVal) {
                minVal = num;
            }
            cin >> num;
        }
    }

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}
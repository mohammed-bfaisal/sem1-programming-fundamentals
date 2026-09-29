#include <iostream>
using namespace std;

int main() {
    int income, tax, netincome;
    cout << "Enter your income: ";
    cin >> income;
    if (income <= 120000) {
        tax = 0.05 * income;
    }
    else if (income <= 240000) {
        tax = 0.1 * income;
    }
    else if (income <= 360000) {
        tax = 0.15 * income;
    }
    else if (income <= 480000) {
        tax = 0.2 * income;
    }
    else {
        tax = 0.25 * income;
    }
}
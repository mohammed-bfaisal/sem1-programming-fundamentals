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
        tax = 0.1 * (income - 120000) + 0.05 * 120000;
    }
    else {
        tax = 0.2 * (income - 240000) + 0.1 * 240000;
    }
    netincome = income - tax;
    cout << "Your tax is: " << tax << endl;
    cout << "Your net income is: " << netincome << endl;
    return 0;
}


#include <iostream>
using namespace std;

void printGreater(int a, int b);

int main()
{
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    printGreater(x, y);
    return 0;
}

void printGreater(int a, int b)
{
    if (a > b)
        cout << a << " is greater" << endl;
    else if (b > a)
        cout << b << " is greater" << endl;
    else
        cout << "Both numbers are equal" << endl;
}

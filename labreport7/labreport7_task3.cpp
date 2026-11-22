#include <iostream>
using namespace std;

int power(int base, int exponent);

int main()
{
    int b, e;
    cout << "Enter the base: ";
    cin >> b;
    cout << "Enter the exponent: ";
    cin >> e;
    cout << b << " raised to the power " << e << " is " << power(b, e) << endl;
    return 0;
}

int power(int base, int exponent)
{
    int i, result = 1;
    for (i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;
}

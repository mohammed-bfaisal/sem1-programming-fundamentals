#include <iostream>
using namespace std;

int reverseNumber(int n);

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Reverse of " << num << " is " << reverseNumber(num) << endl;
    return 0;
}

int reverseNumber(int n)
{
    int rev = 0, digit;
    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

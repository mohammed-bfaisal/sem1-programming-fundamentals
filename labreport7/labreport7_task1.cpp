#include <iostream>
using namespace std;

int isPrime(int n);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num) == 1)
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;
    return 0;
}

int isPrime(int n)
{
    int i, flag = 1;
    if (n <= 1)
        flag = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            flag = 0;
    }
    return flag;
}

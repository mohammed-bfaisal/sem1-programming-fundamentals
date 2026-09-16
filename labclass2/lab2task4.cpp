#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the value of a: \n";
    cin >> a;
    cout << "Enter the value of b: \n";
    cin >> b;

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "Enter new value for both separated by a space: \n"; cin >> a >> b;
    cout << "The new values are " << a << " " << b << endl;
    cout << "The product of these 2 numbers is " << a*b << endl;
    cout << "The sum of these numbers is " << a+b << endl;
    cout << "The difference of these numbers is " << a-b << endl;
    cout << "The division of these numbers is " << a/b << endl;
    return 0;
}
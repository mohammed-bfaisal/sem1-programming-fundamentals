#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Please enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (b > c) {
            cout << "A > B > C, A is the largest";
        }
        else if (b == c) {
            cout << "A is the largest; B and C are equal";
        }
        else {                      // c > b
            if (a > c)
                cout << "A > C > B, A is the largest";
            else if (a == c)
                cout << "A and C are equal and both larger than B";
            else
                cout << "C > A > B, C is the largest";
        }
    }
    else if (a == b) {
        if (c > a)
            cout << "C is the largest; A and B are equal";
        else if (c == a)
            cout << "All three numbers are equal";
        else
            cout << "A and B are equal and both larger than C";
    }
    else {                          // b > a
        if (a > c) {
            cout << "B > A > C, B is the largest";
        }
        else if (a == c) {
            cout << "B is the largest; A and C are equal";
        }
        else {                      // c > a
            if (b > c)
                cout << "B > C > A, B is the largest";
            else if (b == c)
                cout << "B and C are equal and both larger than A";
            else
                cout << "C > B > A, C is the largest";
        }
    }

    cout << endl;
    return 0;
}
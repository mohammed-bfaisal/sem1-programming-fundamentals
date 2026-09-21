#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 3;
    int c = 5;
    float d = 2.5;

    float result = (a - (b * c)) + d;

    cout << "Result of (a-(b*c))+d = " << result << endl;

    return 0;
}
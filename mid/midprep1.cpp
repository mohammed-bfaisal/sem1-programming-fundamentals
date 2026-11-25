#include <iostream>
using namespace std;

int main() {
    int total, hours, minutes, seconds;
    cout << "Enter seconds: ";
    cin >> total;
    hours = total / 3600;
    minutes = total % 3600 / 60;
    seconds = total % 60;
    cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    return 0;
}
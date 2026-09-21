#include <iostream>
using namespace std;
int main() {
    long totalSeconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    long hours = totalSeconds / 3600;
    long minutes = (totalSeconds % 3600) / 60;
    long seconds = totalSeconds % 60;

    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}
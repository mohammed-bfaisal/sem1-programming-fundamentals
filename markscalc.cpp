#include <iostream>
using namespace std;

int main() {
    float per, obt_marks, total_marks;
    cout << "Enter the obtained marks: ";
    cin >> obt_marks;
    cout << "Enter the total marks: ";
    cin >> total_marks;
    per = (obt_marks / total_marks) * 100;
    cout << "The percentage is: " << per << "%" << endl;
    return 0;
}
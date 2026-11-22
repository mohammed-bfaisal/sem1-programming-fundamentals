#include <iostream>
using namespace std;
int main()
{
   int a[5] = {10, 20, 44, 40, 50}, key = 30, pos = -1;
   for (int i = 0; i < 5; i++) {
    if (a[i] == key) {
        pos = i;
        break;
    }
    if (pos == -1) {
        cout << "Element not found" << endl;
    }
   }

   cout << pos
}
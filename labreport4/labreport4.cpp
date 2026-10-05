// Task 1 (Extended): four numbers - equality check + full mathematical operations
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

// ---------- helpers ----------
long long factorial(int n)              // valid for 0..20
{
    long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

long long gcdOf(long long x, long long y)
{
    if (x < 0) x = -x;
    if (y < 0) y = -y;
    while (y != 0) { long long t = x % y; x = y; y = t; }
    return x;
}

void line(const string &title)
{
    cout << "\n==================== " << title << " ====================\n";
}

// ---------- Part A: equality (nested if / if-else) ----------
void checkEquality(int a, int b, int c, int d)
{
    line("PART A: EQUALITY CHECK");
    if (a == b) {
        if (b == c) {
            if (c == d) cout << "All four numbers are equal.\n";
            else        cout << "a, b and c are equal; d is different.\n";
        } else {
            if (c == d)      cout << "Two pairs: a = b and c = d.\n";
            else if (a == d) cout << "a, b and d are equal; c is different.\n";
            else             cout << "Only a and b are equal.\n";
        }
    }
    else if (a == c) {
        if (c == d)      cout << "a, c and d are equal; b is different.\n";
        else if (b == d) cout << "Two pairs: a = c and b = d.\n";
        else             cout << "Only a and c are equal.\n";
    }
    else if (a == d) {
        if (b == c) cout << "Two pairs: a = d and b = c.\n";
        else        cout << "Only a and d are equal.\n";
    }
    else {
        if (b == c) {
            if (c == d) cout << "b, c and d are equal; a is different.\n";
            else        cout << "Only b and c are equal.\n";
        }
        else if (b == d) cout << "Only b and d are equal.\n";
        else if (c == d) cout << "Only c and d are equal.\n";
        else             cout << "All four numbers are different.\n";
    }
}

// ---------- Part B: statistics ----------
void statistics(int n[4])
{
    line("PART B: AGGREGATE OPERATIONS");
    long long sum = 0, product = 1;
    int mn = n[0], mx = n[0];
    for (int i = 0; i < 4; i++) {
        sum += n[i];
        product *= n[i];
        if (n[i] < mn) mn = n[i];
        if (n[i] > mx) mx = n[i];
    }
    double avg = sum / 4.0;

    // sorted copy (simple bubble sort)
    int s[4] = { n[0], n[1], n[2], n[3] };
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3 - i; j++)
            if (s[j] > s[j + 1]) { int t = s[j]; s[j] = s[j + 1]; s[j + 1] = t; }
    double median = (s[1] + s[2]) / 2.0;

    double var = 0;
    for (int i = 0; i < 4; i++) var += (n[i] - avg) * (n[i] - avg);
    var /= 4.0;

    cout << fixed << setprecision(2);
    cout << "Sum                 : " << sum << "\n";
    cout << "Product             : " << product << "\n";
    cout << "Average (mean)      : " << avg << "\n";
    cout << "Median              : " << median << "\n";
    cout << "Smallest            : " << mn << "\n";
    cout << "Largest             : " << mx << "\n";
    cout << "Range (max - min)   : " << (mx - mn) << "\n";
    cout << "Sorted (ascending)  : " << s[0] << ", " << s[1] << ", " << s[2] << ", " << s[3] << "\n";
    cout << "Variance            : " << var << "\n";
    cout << "Std deviation       : " << sqrt(var) << "\n";
    cout << "Sum of squares      : " << (long long)n[0]*n[0] + (long long)n[1]*n[1]
                                       + (long long)n[2]*n[2] + (long long)n[3]*n[3] << "\n";
    cout << "GCD of all four     : " << gcdOf(gcdOf(n[0], n[1]), gcdOf(n[2], n[3])) << "\n";
}

// ---------- Part C: properties of each number ----------
void properties(int n[4])
{
    line("PART C: OPERATIONS ON EACH NUMBER");
    const char names[4] = { 'a', 'b', 'c', 'd' };
    for (int i = 0; i < 4; i++) {
        int x = n[i];
        cout << "\n" << names[i] << " = " << x << "\n";
        if (x > 0)       cout << "  Sign        : positive\n";
        else if (x < 0)  cout << "  Sign        : negative\n";
        else             cout << "  Sign        : zero\n";
        cout << "  Even / Odd  : " << (x % 2 == 0 ? "even" : "odd") << "\n";
        cout << "  Absolute    : " << abs(x) << "\n";
        cout << "  Square      : " << (long long)x * x << "\n";
        cout << "  Cube        : " << (long long)x * x * x << "\n";
        if (x >= 0) cout << "  Square root : " << sqrt((double)x) << "\n";
        else        cout << "  Square root : not real (negative number)\n";
        if (x >= 0 && x <= 20) cout << "  Factorial   : " << factorial(x) << "\n";
        else                   cout << "  Factorial   : only for 0 to 20\n";
        cout << "  Reciprocal  : ";
        if (x != 0) cout << 1.0 / x << "\n";
        else        cout << "undefined (division by zero)\n";
    }
}

// ---------- Part D: pairwise operations ----------
void pairwise(int n[4])
{
    line("PART D: PAIRWISE OPERATIONS");
    const char names[4] = { 'a', 'b', 'c', 'd' };
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            int x = n[i], y = n[j];
            cout << "\n" << names[i] << " (" << x << ") and " << names[j] << " (" << y << ")\n";
            cout << "  Addition       : " << (long long)x + y << "\n";
            cout << "  Subtraction    : " << (long long)x - y << "\n";
            cout << "  Multiplication : " << (long long)x * y << "\n";
            cout << "  Division x / y : ";
            if (y != 0) cout << (double)x / y << "\n";
            else        cout << "undefined (division by zero)\n";
            cout << "  Division y / x : ";
            if (x != 0) cout << (double)y / x << "\n";
            else        cout << "undefined (division by zero)\n";
            cout << "  Modulus x % y  : ";
            if (y != 0) cout << x % y << "\n";
            else        cout << "undefined (division by zero)\n";
            cout << "  Power x ^ y    : ";
            if (y >= 0 && y <= 30) cout << pow((double)x, y) << "\n";
            else                   cout << "skipped (exponent out of range)\n";
            cout << "  GCD            : " << gcdOf(x, y) << "\n";
            cout << "  Average        : " << (x + y) / 2.0 << "\n";
        }
    }
}

int main()
{
    int n[4];
    cout << "Enter four whole numbers (separated by spaces): ";
    cin >> n[0] >> n[1] >> n[2] >> n[3];

    if (cin.fail()) {
        cout << "Invalid input! Please enter whole numbers only.\n";
        return 1;
    }

    cout << "\nYou entered: a = " << n[0] << ", b = " << n[1]
         << ", c = " << n[2] << ", d = " << n[3] << "\n";

    checkEquality(n[0], n[1], n[2], n[3]);
    statistics(n);
    properties(n);
    pairwise(n);

    cout << "\nDone.\n";
    return 0;
}
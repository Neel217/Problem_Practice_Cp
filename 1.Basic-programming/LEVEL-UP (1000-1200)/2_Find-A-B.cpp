// A-B_Finding codechef
#include <iostream>
#include <cmath>
using namespace std;

void solve()
{

    int X, Y, Z;
    cin >> X >> Y >> Z; // User input three positive integer.

    int A, B;
    if ((X * Y) % Z == 0) // A is divisible by B.
    {
        A = X * Y; // A = product of two integers.
        B = Z;     // B = remaining integer.
        cout << A << " " << B << endl;
    }
    else if ((Y * Z) % X == 0) // A is divisible by B.
    {
        A = Y * Z; // A = product of two integers.
        B = X;     // B = remaining integer.
        cout << A << " " << B << endl;
    }
    else if ((Z * X) % Y == 0) // A is divisible by B.
    {
        A = Z * X; // A = product of two integers.
        B = Y;     // B = remaining integer.
        cout << A << " " << B << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- && t <= pow(10, 5))
    {
        solve();
    }

    return 0;
}
// Chessboard-distance codechef
#include<iostream>
#include<cmath>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d; // x1 -> a, y1 -> c, x2 -> b, y2 -> d
    int l = abs(a-c);
    int k = abs(b-d);
    int m = max(l,k);
    
    cout << m << endl; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }    
    
    return 0;
}
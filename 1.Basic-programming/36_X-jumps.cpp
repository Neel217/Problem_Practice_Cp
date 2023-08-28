// X_jumps codechef
#include<iostream>
#include <cmath>
using namespace std;

void solve() 
{
    int x,y;
    cin >> x >> y;
    int fl = x/y + (x%y);
    cout << fl << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--) 
    { 
        solve();
    }
    return 0;
}
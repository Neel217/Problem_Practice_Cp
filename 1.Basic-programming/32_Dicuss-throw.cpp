// Discuss_throw codechef
#include<iostream>
#include <cmath>
using namespace std;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;

    int k = max(a,max(b,c));
    cout << k << endl;
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
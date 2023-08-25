// Finding_shoes codechef
#include<iostream>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    if(m == 0) {
        cout << 2*n << endl;
    } else if (n > m) {
        cout << (n-m) + n << endl;
    } else {
        cout << n << endl;
    }
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
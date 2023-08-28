// Cup-finals codechef
#include<iostream>
using namespace std;

void solve() 
{
    int x,y,n;
    cin >> x >> y >> n;

    if(x-y <= n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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
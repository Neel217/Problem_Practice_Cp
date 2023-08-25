// Monopoly
#include<iostream>
using namespace std;

void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a,b,c,d <= 100 && a,b,c,d >= 1) {
        if(a > (b+c+d) || b > (a+c+d) || c > (a+b+d) || d > (a+b+c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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
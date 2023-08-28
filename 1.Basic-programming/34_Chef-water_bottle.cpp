// Chef-empty-bottle codechef
#include<iostream>
#include <cmath>
using namespace std;

void solve() {
    int n,x,k;
    cin >> n >> x >> k;
    int fl = k/x;

    if(x <= n)
    {
        cout << floor(fl) << endl;
    }
    else if(n > x && x > k) {
        cout << "0" << endl;
    } else if(x==1){
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
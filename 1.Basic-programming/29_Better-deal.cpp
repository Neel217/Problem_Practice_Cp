// Better-deal codechef
#include<iostream>
using namespace std;

void solve () {
    int a=100,b=200;
    int n,m;
    cin >> n >> m;
    // percent fourmula = n/100 * (a or b)
    int k = 100 -n; // final price shop 1
    int l = 2*(100-m); // final price shop 2

    if(l > k) {
        cout << "FIRST" << endl;
    } else  if(l == k) {
        cout << "BOTH" << endl;
    } else {
        cout << "SECOND" << endl;
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
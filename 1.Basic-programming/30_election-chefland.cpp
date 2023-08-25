// Election-in-chefland codechef
#include<iostream>
using namespace std;

void solve() {
    int n,x;
    cin >> n >> x;
    int a[n];
    int k=0;

    for(int i=0; i <n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) { 
        if(a[i] >= x) {
            k++;
        }
    }
    
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
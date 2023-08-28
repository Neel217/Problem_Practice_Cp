// Online-offline-fodo-order codechef
#include<iostream>
using namespace std;

void solve() 
{
    double n,m;
    cin >> n >> m;

    double k = n - (n/10);
    
    if(m < k) {
        cout << "DINING" << endl;
    } 
    else if (m == k) {
        cout << "EITHER" << endl;
    }
    else {
        cout << "ONLINE" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
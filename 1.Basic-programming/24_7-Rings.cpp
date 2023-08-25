// 7-rings codechef
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x,n;
        cin >> n >> x;
        int k = x*n;

        if( k>= 10000 && k<=99999) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
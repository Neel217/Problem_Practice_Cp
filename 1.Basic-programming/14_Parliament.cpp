// Parliament codechef
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
       int n,x;
       cin >> n >> x;

       if((n-x) < x) {
            cout << "YES" << endl;
       } else if((n-x) == n/2) {
            cout << "YES" << endl;
       } else {
            cout << "NO" << endl;
       }
    }
    
    return 0;
}
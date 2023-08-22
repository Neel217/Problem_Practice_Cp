// Course-registration codechef
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--) {
        int n,m,k;
        cin >> n >> m >> k;

        if(m-k < n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
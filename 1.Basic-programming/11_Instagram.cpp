// Instagram codechef
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x, y; // x -> following, y-> followers
        cin >> x >> y;

        if(x > y*10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
// Reach_Home codechef
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin >> x >> y;

        int reach = x*5;

        if(reach < y) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
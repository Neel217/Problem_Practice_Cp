// TV_volume_control codechef
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x,y,finalV;
        cin >> x >> y;
        finalV = y - x;

        if(x > y) {
            cout << abs(finalV) << endl;
        } else if(x == y) {
            cout << "0" << endl;
        } else {
            cout << abs(finalV) << endl;
        }
    }
    
    return 0;
}
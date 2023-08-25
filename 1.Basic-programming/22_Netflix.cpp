// Netflix codechef
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x,y,z,D;
        cin >> x >> y >> z >> D;
        if(x+y >= D || y+z >= D || x+z >= D) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
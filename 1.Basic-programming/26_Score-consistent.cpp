// Is_Score-consistent? codechef
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
        cin >> a >> b;
        cin >> c >> d;
        
        if(a,b,c,d <= 10 &&  a,b,c,d >= 0) {
            if(a<=c && b <= d) {
                cout << "POSSIBLE" << endl;
            } else {
                cout << "IMPOSSIBLE" << endl;
            }
        }
    }
    
    return 0;
}
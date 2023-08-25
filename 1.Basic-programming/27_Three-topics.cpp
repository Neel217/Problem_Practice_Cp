// 3-Topics codechef
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a,b,c,d <= 10 && a,b,c,d > 0) {
        if(a==d || b==d || c == d) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
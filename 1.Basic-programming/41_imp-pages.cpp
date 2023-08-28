// Important-pages codechef
#include<iostream>
using namespace std;

void solve()
{
    int A,B;
    cin >> A >> B;

    if(A == 0) {
        cout << "https://www.codechef.com/practice" << endl;
    }
    else if(A == 1 && B == 0) {
        cout << "https://www.codechef.com/contests" << endl;
    } else {
        cout << "https://discuss.codechef.com" << endl;
    }
}

int main()
{
    solve();
    return 0;
}
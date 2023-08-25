// BUS-Seat-numbering codechef
#include <iostream>
using namespace std;

void solve()
{
    int gs;
    cin >> gs;

    if (gs <= 15)
    {
        if (gs > 10 && gs < 16)
        {
            cout << "Lower Single" << endl;
        }
        else
        {
            cout << "Lower Double" << endl;
        }
    }
    else if (gs > 15 && gs <= 30)
    {
        if (gs > 25 && gs <= 30)
        {
            cout << "Upper Single" << endl;
        }
        else
        {
            cout << "Upper Double" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
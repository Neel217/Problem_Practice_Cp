// Cred_Credit-score codechef
#include<iostream>
using namespace std;

int main()
{   
    int x = 750;
    int y;
    cin >> y;

    if(y >= x && y <= 1000) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
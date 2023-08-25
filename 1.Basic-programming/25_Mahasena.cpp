// Mahesmati_Mahasena codechef
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        int k = a[i]%2 == 0;
        int l = a[i]%2 == 1;

        if(k > l) {
            cout << "READY FOR BATTLE" << endl;
        } else if(k == l) { 
            cout << "NOT READY" << endl;
        } else {
            cout << "NOT READY" << endl;
        }

    }

    return 0;
}
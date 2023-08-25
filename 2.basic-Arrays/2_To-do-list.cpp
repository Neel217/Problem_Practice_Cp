// TO_do-List codechef
// TO_do-List codechef
#include<iostream>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int cur =0;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            
            if(a[i] >= 1000) {
                cur++;
            }
        }
        cout << cur << endl;
        
    }
    
    return 0;
}
//  Read-pages codechef
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while (t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    
	    int read = (x*y);
	    
	    if (read >=n) {
	        cout<<"YES"<<endl;
	    } else {
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
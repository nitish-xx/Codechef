https://www.codechef.com/problems/GDTURN
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x+y>6)
           cout<<"YES";
        else
           cout<<"NO";
         cout<<endl;
    }
	return 0;
}

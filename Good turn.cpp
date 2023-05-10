https://www.codechef.com/problems/GDTURN
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--)
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

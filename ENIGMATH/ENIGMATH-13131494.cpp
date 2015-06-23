#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
    {
    	unsigned long long int A,B,G;
    	cin>>A>>B;
        G=__gcd(A,B);
        cout<<B/G<<" "<<A/G<<endl;
    }
    return 0;
}
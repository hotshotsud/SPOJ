#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long int t,n;
    cin>>t;
    while(t--)
    {


        cin>>n;
        n=(n*(n+2)*(2*n+1))/8;
        cout<<n<<endl;
    }
    return 0;
}

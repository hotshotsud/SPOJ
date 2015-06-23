#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    long long int sum=0;
    cin>>t;
    while(t--)
    {
            long long int n;
            cin>>n;
            if(n>0)
            {
                sum+=n;
            }
    }
    cout<<sum<<endl;
    return 0;
}

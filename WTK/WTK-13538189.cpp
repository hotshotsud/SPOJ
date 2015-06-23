#include<iostream>
#include<vector>
using namespace std;
long long int k=0;
long long int j(long long n,long long k)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        k++;
        return (j(n-1,k)+k-1)%n+1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        cin>>a;
        k=0;
        cout<<j(a,k)<<endl;
    }
    return 0;
}

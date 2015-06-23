#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long int n;
    scanf("%ld",&n);
    long int a[n];
    scanf("%ld",&a[0]);
    long int b=a[0];
    for(long int i=1;i<n;i++)
    {
        scanf("%ld",&a[i]);
        b=b^a[i];
    }
    
    cout<<b<<endl;

    return 0;
}

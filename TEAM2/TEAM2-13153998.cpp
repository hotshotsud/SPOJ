#include<bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(false);
    unsigned long long int a[4],max1,max2,i=0;
    while(cin>>a[0])
    {
        i++;
        cin>>a[1]>>a[2]>>a[3];
        sort(a,a+4);
        max1=a[3];
        max2=a[2];


        printf("Case %lld: %lld\n",i,max1+max2);

    }
    return 0;
}

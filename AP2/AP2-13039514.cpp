#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a3,al3,sum,d,n,a;
        cin>>a3>>al3>>sum;
        n=((2*sum)/(a3+al3));
        d=((al3-a3)/(n-5));
        a=(((a3*(n-3))-(2*al3))/(n-5));
        cout<<n<<endl;
        cout<<a<<" ";
        n--;
        while(n--)
        {
            a+=d;
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}

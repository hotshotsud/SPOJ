#include<stack>
#include<iostream>
#include<cstdio>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long n;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        long long h[n+1],i;
        for(i=1;i<n+1;i++)
        {
            cin>>h[i];
        }
        stack <long long> my;
        long long l[n+1],r[n+1];
        l[1]=0;
        my.push(1);
        for(i=2;i<n+1;i++)
        {
            if(!my.empty())
            {
                if( h[my.top()] < h[i] )
                {
                    l[i]=i-my.top()-1;
                    my.push(i);
                    goto aa;
                }
                else if( h[my.top()] == h[i] )
                {
                    long long temp=my.top();
                    while(!my.empty() && h[i]<=h[my.top()] )
                    {
                        my.pop();
                    }
                    if(!my.empty()) l[i]=i-my.top()-1;
                    else l[i]=i-1;
                    my.push(temp);
                    my.push(i);
                    goto aa;
                }
                else
                {
                    while(!my.empty() && h[i] <= h[my.top()] )
                    {
                        my.pop();
                    }
                    if( !my.empty() ) l[i]=i-my.top()-1;
                    else l[i]=i-1;
                    my.push(i);

                }
            }
            aa:;
            }


        while(!my.empty())
        {
            my.pop();
        }
        r[n]=0;
        my.push(n);
        for(i=n-1;i>0;i--)
        {
            if(!my.empty())
            {
                if( h[i]<h[my.top()] )
                {

                    while(!my.empty() && h[i]<=h[my.top()] )
                    {
                        my.pop();
                    }
                    if(!my.empty()) r[i]=my.top()-i-1;
                    else r[i]=n-i;
                    my.push(i);
                }
                else if( h[my.top()] == h[i] )
                {
                    long long temp=my.top();
                    while(!my.empty() && h[i]<=h[my.top()] )
                    {
                        my.pop();
                    }
                    if(!my.empty()) r[i]=my.top()-i-1;
                    else r[i]=n-i;
                    my.push(temp);
                    my.push(i);
                    goto bb;
                }
                else
                {
                    r[i]=my.top()-i-1;

                    my.push(i);
                    goto bb;
                }
            }
            bb:;
        }
        /*for(i=1;i<n+1;i++)
        {
            cout<< "l["<<i<<"] "<<l[i] <<" "<<" r["<<i<<"] "<<r[i]<<" area["<<i<<"] "<<(h[i]*(r[i]+l[i]+1))<<endl;
        }*/
        //cout<< " l[3]  " << l[3] << "  r[3]  "<<r[3] << " area[3]  " << (l[3]+r[3]+1)*h[3] << endl;
        long long area[n+1];
        for(i=1;i<n+1;i++)
        {
            area[i]=h[i] * (l[i]+r[i]+1);
        }
        long long ar=INT_MIN;
        for(i=1;i<n+1;i++)
        {
            ar=max(ar,area[i]);
        }
        cout<<ar<<endl;
    }
    return 0;
}

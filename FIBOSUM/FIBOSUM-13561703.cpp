#include<iostream>
#define MOD 1000000007
using namespace std;
void multiply(long long int F[2][2], long long int M[2][2]);

void power(long long int F[2][2],long long int n);
long long int fib(long long int n)
{
long long int F[2][2]={{1,1},{1,0}};
    if(n==0)
    {
        return 0;
    }
    else
    {
        power(F,n-1);
        return F[0][0]%MOD;
    }
}
void power(long long int F[2][2],long long int n)
{
     if( n == 0 || n == 1) return;

    long long int M[2][2] = {{1,1},{1,0}};
    power(F, n/2);
    multiply(F,F);

    if (n%2 != 0)
     multiply(F, M);

}
void multiply(long long int F[2][2],long long int M[2][2])
{
  long long int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  long long int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  long long int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  long long int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x%MOD;
  F[0][1] = y%MOD;
  F[1][0] = z%MOD;
  F[1][1] = w%MOD;
}

int main()
{
	ios::sync_with_stdio(false);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;

        cout<<(fib(b+2)-fib(a+1)+MOD)%MOD<<endl;

    }
    return 0;
}

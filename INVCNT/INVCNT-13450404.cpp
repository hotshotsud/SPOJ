#include<bits/stdc++.h>

using namespace std;
long long int i,j,k,c;
long long int A[1000001];
void merge(long long *A,long long int *L,long long leftcount, long  long *R, long long rightcount){
        i=0;j=0;k=0;
    while(i<leftcount && j<rightcount)
    {
        if(L[i]<=R[j]){
            A[k++]=L[i++];
        }
        else{
                c+=leftcount-i;
            A[k++]=R[j++];
        }
    }
    while(i<leftcount){
        A[k++]=L[i++];
    }
    while(j<rightcount){
        A[k++]=R[j++];
    }
}
void mergeSort(long long int *A,long long int n)
{
    long long int mid,*L,*R;
    if(n<2) return;

    mid=n/2;
    L = (long long int*)malloc(mid*sizeof(long long int));
    R = (long long int*)malloc((n- mid)*sizeof(long long int));
    for(i=0;i<mid;i++)
    {
        L[i]=A[i];
    }
    for(i=mid;i<n;i++)
    {
        R[i-mid]=A[i];
    }
    mergeSort(L,mid);
    mergeSort(R,n-mid);
    merge(A,L,mid,R,n-mid);
}
int main()
{
    long long int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    c=0;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    mergeSort(A,n);
    cout<<c<<endl;}
    return 0;
}

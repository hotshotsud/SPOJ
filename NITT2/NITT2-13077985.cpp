//Number of test cases in first line, T. T <= 100.

//Each line contains one number N, whose divisibility is to be tested. 1 <= N <= 10^50000

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     ios::sync_with_stdio(false);
     int t;
     cin>>t;
     while(t--)
     {
         long long int i=0,sum=0,sum_for_seven;
         string str;
         cin>>str;
         long long int s=str.size();


         char ch2=str.at(s-2),ch1=str.at(s-1);
        int b2=ch2-'0',b1=ch1-'0';
        int last_two_digits=b2*10+b1;





         for(i=0;i<s;i++)
         {
             int k=str.at(i)-'0';
             sum+=k;

         }

        sum_for_seven=sum-(3*b1);
        if(sum_for_seven<0){sum_for_seven=sum_for_seven*-1;}else{}


       {

         if(sum%9==0 && last_two_digits%4==0)
         {
            cout<<"Yes ";
         }
         else
         {
             cout<<"No ";
         }}{
         if(last_two_digits%25==0 && sum%3==0 )
         {
             cout<<"Yes"<<endl;
         }
         else
         {
             cout<<"No"<<endl;
         }}
     }
     return 0;
 }


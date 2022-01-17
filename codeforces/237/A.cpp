#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int A[n],B[n];
   fr(i,n)
   cin>>A[i]>>B[i];
   int ans=1;
   for(int i=1;i<n;i++)
   {
       int count=1;
       if(A[i]==A[i-1] and B[i]==B[i-1])
       {
           while(A[i]==A[i-1] and B[i]==B[i-1])
           {
               i++;
               count++;
           }
       }
       ans=max(ans,count);
   }
   cout<<ans<<"\n";
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
      solve();
   return 0;    
}
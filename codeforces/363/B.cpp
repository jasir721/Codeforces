#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   int A[n];
   ll sum=0,prev=0;
   int ans=1;
   fr(i,n) cin>>A[i];
   fr(i,k) sum+=A[i];
   prev=sum;
   for(int i=k;i<n;i++)
   {
       prev=min(sum,prev);
       sum=sum+(A[i]-A[i-k]);
       if(sum<prev)
       {
           ans=i-k+2;
       }
    //    cout<<sum<<" "<<prev<<" "<<ans<<"\n";
   }
   cout<<ans<<"\n";
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
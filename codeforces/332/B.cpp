#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n,k;
   cin>>n>>k;
   vector<ll>A(n,0),prefix(n,0),ksum(n,0),mx_sum(n,0);
   cin>>A[0];
   prefix[0]=A[0];
   for(int i=1;i<n;i++)
   cin>>A[i],prefix[i]=prefix[i-1]+A[i];
   for(int i=0;i<=n-k;i++)
   {
       ksum[i]=prefix[i+k-1]-prefix[i]+A[i];
   }
   mx_sum[n-1]=n-1;
   for(int i=n-2;i>=0;i--)
   {
       if(ksum[i]>=ksum[mx_sum[i+1]])
       {
           mx_sum[i]=i;
       }
       else
       {
           mx_sum[i]=mx_sum[i+1];
       }
   }
   ll mx=INT_MIN,a1=-1,a2=-1;
   for(int i=0;i<n-k;i++)
   {
       if(mx<ksum[i]+ksum[mx_sum[i+k]])
       {
           mx=ksum[i]+ksum[mx_sum[i+k]];
           a1=i,a2=mx_sum[i+k];
       }
   }
   cout<<a1+1<<" "<<a2+1<<"\n";
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
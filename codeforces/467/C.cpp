#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m,k;
   cin>>n>>m>>k;
   vector<int>v;
   vector<ll>A(n+1,0);
   for(int i=1;i<n+1;i++)
   {
       cin>>A[i];
       A[i]+=A[i-1];
   }
   // vector<int>B;
   vector<vector<ll>>dp(n+1,vector<ll>(k+1,0));
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=k;j++)
      {
         if(j*m<=i)
         {
            dp[i][j]=max(dp[i-1][j],dp[i-m][j-1]+A[i]-A[i-m]);
         }
      }
   }
   cout<<dp[n][k]<<"\n";
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t;
   // cin>>t;
   // while(t--)
      solve();
   return 0;    
}
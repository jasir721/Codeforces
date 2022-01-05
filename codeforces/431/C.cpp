#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
const int mod=1e9+7;
int dp[100][2];
void solve()
{   
   int n,d,k;
   cin>>n>>k>>d;
   dp[0][0]=1,dp[0][1]=0;
   for(int i=1;i<=n;++i)
   {
       dp[i][0]=dp[i][1]=0;
       for(int j=1;j<=k and j<=i;++j)
       {
           if(j<d)
           {
               dp[i][0]=(dp[i][0]+dp[i-j][0])%mod;
                dp[i][1]=(dp[i][1]+dp[i-j][1])%mod;
           }
           else
           {
               dp[i][1]=(dp[i][1]+dp[i-j][0])%mod;
                dp[i][1]=(dp[i][1]+dp[i-j][1])%mod;    
           }
        //    cout<<dp[i][0]<<" "<<dp[i][1]<<"\n";
       }
   }
   cout<<dp[n][1]<<"\n";
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
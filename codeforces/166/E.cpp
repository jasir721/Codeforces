#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    ll n,m=1e9+7;
    cin>>n;
    vector<ll>dp(n+1,0);
    dp[0]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=((dp[i-1]*2)%m+(dp[i-2]*3)%m)%m;
    }
    cout<<dp[n];
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}
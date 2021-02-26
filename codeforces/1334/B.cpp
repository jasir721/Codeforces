#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(ll i=0;i<n;i++)
ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n,m;
   cin>>n>>m;
   ll a[n];
   fr(i,n)
   cin>>a[i];
   sort(a,a+n,greater<ll>());
   ll sum=0,prev=0;
   fr(i,n)
   {
       sum+=a[i];
       if(sum/(i+1)<m)
       {
           cout<<i<<"\n";
           return;
       }
       prev=sum;
   }
   cout<<n<<"\n";
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll t;
   cin>>t;
   while(t--)
      solve();
   return 0;    
}
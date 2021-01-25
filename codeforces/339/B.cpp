#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(ll i=0;i<n;i++)
ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
ll maxi(ll a[],ll n)
{
   ll max=a[0],j=0;
   for(ll i=1;i<n;i++)
   {
      if(a[i]>max)
      {
         max=a[i];
         j=i;
      }
   }
   return j;
}
ll mini(ll a[],ll n)
{
   ll min=a[0],j=0;
   for(ll i=1;i<n;i++)
   {
      if(a[i]<min)
      {
         min=a[i];
         j=i;
      }
   }
   return j;
}
/*********************************************************************************************************************/
void solve()
{   
    ll n,m;
    cin>>n>>m;
    ll a[m],k=0,j=0;
    fr(i,m)
    {
    cin>>a[i];
    if(a[i]-1>j)
    k+=a[i]-1-j;
    else if(a[i]-1<j)
    k+=(n-j)+a[i]-1;
    j=a[i]-1;
    //cout<<j<<"\t"<<k<<"\n";
    }
    cout<<k;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(ll i=0;i<n;i++)
ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    ll n,m,a;
    cin>>n>>m>>a;
    ll c=0,d=0;
    if(n%a==0)
    c=(n/a);
    else if(n%a!=0)
    c=(n/a)+1;
    if(m%a==0)
    d=(m/a);
    else if(m%a!=0)
    d=(m/a)+1;
    cout<<c*d<<"\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(ll i=0;i<n;i++)
ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n,x;
   cin>>n>>x;
   ll a[n];
   fr(i,n)
   cin>>a[i];
   ll sum=0;
   ll f=0,g=0;
   fr(i,n)
   {
	   if(a[i]%x==0)
	   f+=(a[i]/x);
	   else
	   f+=((a[i]/x)+1);
	   sum+=a[i];
   } 
   if(sum%x==0)
   cout<<min((sum/x),f)<<" "<<f<<"\n";
   else
   cout<<min((sum/x)+1,f)<<" "<<f<<"\n";
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
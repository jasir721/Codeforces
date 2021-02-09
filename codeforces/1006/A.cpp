#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n;
   cin>>n;
   ll a[n];
   fr(i,n)
   {
       cin>>a[i];
   }
   fr(i,n)
   {
       if(a[i]%2==0)
       cout<<a[i]-1<<" ";
       else
       cout<<a[i]<<" ";
   }
   cout<<"\n";
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}
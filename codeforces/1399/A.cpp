#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int a[n];
   fr(i,n)
   cin>>a[i];
   sort(a,a+n);
   fr(i,n-1)
   {
      if(abs(a[i]-a[i+1])<=1)
      continue;
      else
      {
         cout<<"NO\n";
         return;
      }
   }
   cout<<"YES\n";
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--)
      solve();
   return 0;    
}
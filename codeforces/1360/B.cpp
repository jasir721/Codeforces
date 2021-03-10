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
   int m=INT_MAX;
   fr(i,n-1)
   {
      m=min(m,abs(a[i]-a[i+1]));
   }
   cout<<m<<"\n";
   
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   double v=0;
   for(double i=1;i<=n;i++)
   {
      v+=(1/i);
   }
   cout<<v<<"\n";
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}
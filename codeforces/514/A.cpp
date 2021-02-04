#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
ll gcd(ll a, ll b)
{
   if (a == 0)
      return b;
   return gcd(b % a, a);
}
void solve()
{
   string s;
   cin>>s;
   int k=s.length();
   int a[k];
   if((int)s[0]-48==9)
   a[0]=(int)s[0]-48;
   else if((int)s[0]-48>=5)
   a[0]=9-(int)s[0]+48;
   else
   a[0]=(int)s[0]-48;
   cout<<a[0];
   for(int i=1;i<k;i++)
   {
      int j=(int)s[i]-48;
      if(j>=5)
      a[i]=9-j;
      else
      a[i]=j;
      cout<<a[i];
   }
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
   return 0;
}
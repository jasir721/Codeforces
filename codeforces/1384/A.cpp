#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   string s;
   fr(i,100)
   s+='a';
   int a[n];
   fr(i,n)
   cin>>a[i];
   cout<<s<<"\n";
   fr(i,n)
   {
      if(s[a[i]]=='a')
      s[a[i]]='b';
      else
      s[a[i]]='a';
      cout<<s<<"\n";
   }
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
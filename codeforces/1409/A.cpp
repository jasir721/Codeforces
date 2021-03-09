#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m;
   cin>>n>>m;
   int a=max(n,m);
   int b=min(n,m);
   if((a-b)%10==0)
   cout<<(a-b)/10<<"\n";
   else
   cout<<((a-b)/10)+1<<"\n";
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
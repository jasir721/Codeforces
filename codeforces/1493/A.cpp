#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   int m=0;
   m+=(n-k);
   if(k!=1)
   {
   if(k%2==0)
   m+=((k)-(k/2));
   else
   m+=((k)-(k/2)-1);
   }
   cout<<m<<"\n";
   for(int i=k+1;i<=n;i++)
   cout<<i<<" ";
   if(k%2==0)
   for(int i=(k/2);i<k;i++)
   cout<<i<<" ";
   else
    for(int i=(k/2)+1;i<k;i++)
   cout<<i<<" ";
   cout<<"\n";
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
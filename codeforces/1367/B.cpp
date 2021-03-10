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
   int o=0,e=0;
   fr(i,n)
   {
      if(i%2==0)
      {
         if(a[i]%2!=0)
         e++;
      }
      else
      {
         if(a[i]%2==0)
         o++;
      }
   }
   if(o==e)
   cout<<o<<"\n";
   else 
   cout<<-1<<"\n";
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
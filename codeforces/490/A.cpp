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
   map<int,int>m;
   fr(i,n){
   cin>>a[i];
   m[a[i]]++;
   }
   int k=min(m[1],min(m[2],m[3]));
   cout<<k<<"\n";
   int i=0,j=0,x=0;
   while(k--)
   {
      for(;i<n;)
      if(a[i]==1)
      {
         cout<<i+1<<" ";
         i++;
         break;
      }
      else
      {
         i++;
      }
      for(;j<n;)
      if(a[j]==2)
      {
         cout<<j+1<<" ";
         j++;
         break;
      }
      else
      {
         j++;
      }
            for(;x<n;)
      if(a[x]==3)
      {
         cout<<x+1<<" ";
         x++;
         break;
      }
      else
      {
         x++;
      }
      cout<<"\n";
   }
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}